from flask import *

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

@main.route('/')
def main_route():
    # Function to fill out options for getting all user info 
    print("in home route")
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
    