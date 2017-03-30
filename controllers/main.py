from flask import *
import webbrowser

from extensions import connect_to_database, get_db

main = Blueprint('main', __name__, template_folder='templates')

db = get_db()

'''
This is the main class for the controllers of the dynamic web pages served 
for clients of our Mindfulness project. It renders templates for various routes,
as well as holds helper functions for accessing the database
'''

# Returns true if email/pword is a valid login; false otherwise
def login_succeeds(email, pword):
    cur = db.cursor()
    query = "SELECT password FROM Doctor WHERE email=\"{}\"".format(email)
    cur.execute(query)
    results = cur.fetchall()
    if results:
        if results[0]['password'] == pword:
            return True
    return False

# Returns user information by email for credentialed users 
def get_user_info(email):
    cur = db.cursor()
    query = "SELECT firstname, lastname FROM Doctor WHERE email=\"{}\"".format(email)
    cur.execute(query)
    results = cur.fetchall()
    return results

# Returns a list of patients that match with firstname, lastinit
def get_patient_results(firstname, lastinit):
    cur = db.cursor()
    query = "SELECT * FROM Patient WHERE firstname=\"{}\" AND lastinit=\"{}\"".format(firstname, lastinit)
    cur.execute(query)
    results = cur.fetchall()
    return results

# Handles GET and POST requests to the main route, directing logged in users to 
# submit search queries and redirecting sessionless users to the login page
@main.route('/', methods=['GET', 'POST'])
def main_route():
    if request.method == "POST":
        patient_firstname = request.form.get("firstname")
        patient_lastinit = request.form.get("lastinit")
        results = get_patient_results(patient_firstname, patient_lastinit)
        return render_template("results.html", results=results)
    else:
        if 'firstname' in session: 
            return render_template("index.html")
        else:
            print("redirect")
            return redirect('/login')

# Login page allows user not in session to log in; redirects to home page if 
# user is already logged in
@main.route('/login', methods=['GET', 'POST'])
def login_route():
    if 'firstname' in session:
        return redirect('/')
    if request.method == "POST":
        errors = []
        email = request.form.get("email")
        pword = request.form.get("pword")
        if not login_succeeds(email, pword):
            errors.append("There was a problem logging in. Check your credentials")
            return render_template("login.html", errors=errors)
        else:
            results = get_user_info(email)
            session['firstname'] = results[0]['firstname']
            session['lastname'] = results[0]['lastname']
            return redirect('/')
    return render_template("login.html")

# Logs a user out
@main.route('/logout')
def logout_route():
    print("user logging out...")
    session.pop('firstname', None)
    session.pop('lastname', None)
    return redirect('/')

# Returns HTML page with information about the site and creators
@main.route('/about')
def about_route():
    return render_template("about.html")

# User can route to this page to access information directly on a specific patient
# Reroutes the user to log in page if no session
# Handles POST requests for user wishing to change the severity level of certain symptoms
@main.route('/result/<patient_id>', methods=['GET', 'POST'])
def result_route(patient_id):
    # shouldn't be able to get result if not logged in
    cur = db.cursor()
    if request.method == "POST":
        # iterate through values from forms, update them in Symptoms table 
        for k in request.form:
            value = request.form[k]
            update_level_query = "UPDATE Symptoms SET severityLevel={} WHERE patientID={} AND description=\"{}\"".format(value, patient_id, k)
            cur.execute(update_level_query)
        
    if 'firstname' not in session:
        return redirect('/login')
    data = {}
    
    patient_query = "SELECT * FROM Patient WHERE id={}".format(int(patient_id))
    cur.execute(patient_query)
    patient_result = cur.fetchall()
    if not patient_result:
        # not found; maybe update this later to be more clear, using error handling
        return redirect('/')
    data['patient_info'] = patient_result[0]
    symptom_query = "SELECT * FROM Symptoms WHERE patientID={}".format(int(patient_id))
    cur.execute(symptom_query)
    symptom_results = cur.fetchall()
    data['symptoms'] = symptom_results
    #print(data)
    return render_template("data.html", data=data)
    
# API to add a new patient into the database, along with the symptoms and severity level
# Expects a JSON object sent along with POST request, parses this file and enters
# into tables
@main.route('/api/add-patient', methods=['POST'])
def add_patient_route():
    print("api called!")
    incoming_json = request.get_json(silent=True)
    print(incoming_json)

    cur = db.cursor()

    # submit patient to table
    firstname = incoming_json['first']
    lastinit = incoming_json['last']
    dobMonth = incoming_json['dobMonth']
    dobDay = incoming_json['dobDay']
    dobYear = incoming_json['dobYear']

    # See if patient already exists
    patient_results = get_patient_results(firstname, lastinit)

    # Clear out existing patient data, refill
    if len(patient_results) > 0:
        delete_query = "DELETE FROM Patient WHERE firstname=\"{}\" and lastinit=\"{}\";".format(firstname, lastinit)
        cur.execute(delete_query)

    patient_query = "INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES \
    (\"{}\", \"{}\", {}, {}, {});".format(firstname, lastinit, dobMonth, dobDay, dobYear)
    cur.execute(patient_query)
    # get patient id
    id_query = "SELECT id FROM Patient WHERE firstname=\"{}\" AND lastinit=\"{}\"".format(firstname, lastinit)
    cur.execute(id_query)
    id_result = cur.fetchall()
    patient_id = id_result[0]['id']
    # enter in symptoms for patient
    for s in incoming_json['symptoms']:
        description = s['description']
        severityLevel = s['severityLevel']
        symptom_query = "INSERT INTO Symptoms (patientID, description, severityLevel) VALUES \
        ({}, \"{}\", {})".format(patient_id, description, severityLevel)
        cur.execute(symptom_query)
    return "good"

# Route which patients will access via the HoloLens browser app. We return a static file here
# of the exported WebGL Unity application. The Unity application makes an AJAX POST request from 
# the game scripts to our API in order to submit patient information 
@main.route('/patient-view')
def patient_view_route():
    # TODO: change host once deployed
    host = "http://localhost:5000"
    filename =  host + "/static/unity/build/index.html"
    webbrowser.open(filename, new=0, autoraise=True)
    return "Rerouting you to the patient portal..."
