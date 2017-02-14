from flask import * 
from mysql import connector
patient = Blueprint('patient', __name__, template_folder='templates')

@patient.route('/patient/<id>', methods=['GET','POST'])
def patient_route(id):

    cnx = connector.connect(user='root', password='chesney',
                              host='localhost',
                              database='test')
    cur = cnx.cursor()

    # data on patient with specified id
    cur.execute('SELECT * FROM test.patient WHERE id="%s" ' % (id))
    patient = cur.fetchall()
   
    
    patientdata = str(patient).split('\'')

    options = {}

    if len(patient) == 0:
    	options["exists"] = False
    else:
    	options["id"] = id
    	options["exists"] = True
    	options["name"] = patientdata[1]
    	options["lastinit"] = patientdata[3]

    return render_template("patient.html", **options)