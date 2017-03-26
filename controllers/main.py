from flask import *
import webbrowser

from extensions import connect_to_database, get_db

main = Blueprint('main', __name__, template_folder='templates')

db = get_db()

def login_succeeds(email, pword):
    cur = db.cursor()
    query = "SELECT password FROM Doctor WHERE email=\"{}\"".format(email)
    cur.execute(query)
    results = cur.fetchall()
    if results:
        if results[0]['password'] == pword:
            return True
    return False

def get_user_info(email):
    cur = db.cursor()
    query = "SELECT firstname, lastname FROM Doctor WHERE email=\"{}\"".format(email)
    cur.execute(query)
    results = cur.fetchall()
    return results

def get_patient_results(firstname, lastinit):
    cur = db.cursor()
    query = "SELECT * FROM Patient WHERE firstname=\"{}\" AND lastinit=\"{}\"".format(firstname, lastinit)
    cur.execute(query)
    results = cur.fetchall()
    return results

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

@main.route('/login', methods=['GET', 'POST'])
def login_route():
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

@main.route('/logout')
def logout_route():
    print("user logging out...")
    session.pop('firstname', None)
    session.pop('lastname', None)
    return redirect('/')

@main.route('/about')
def about_route():
    return render_template("about.html")

'''
@main.route('/result/<patient_id>')
def result_route(patient_id):
    return render_template("data.html")
'''
    
# call to api to add patient; called from unity app
@main.route('/api/add-patient', methods=['POST'])
def result_route():
    print("api called!")
    #TODO: grab json and fill into DB
    return "good"

@main.route('/patient-view')
def patient_view_route():
    # TODO: change host once deployed
    host = "http://localhost:5000"
    filename =  host + "/static/unity/web_in_test/build_test/index.html"
    webbrowser.open(filename, new=0, autoraise=True)
    return "good"
