from flask import * 
from mysql import connector
patient = Blueprint('patient', __name__, template_folder='templates')

@patient.route('/patient/<id>', methods=['GET','POST'])
def patient_route(id):

    print id

    cnx = connector.connect(user='root', password='chesney',
                              host='localhost',
                              database='test')
    cur = cnx.cursor()

    # data on patient with specified id
    cur.execute('SELECT * FROM test.patient WHERE id="%s" ' % (id))
    patient = cur.fetchall()
    print patient

    options = {"id": id}
    options[name] = patient[1]
    options[lastinit] = patient[2]
    return render_template("patient.html", **options)