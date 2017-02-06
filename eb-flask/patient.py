from flask import * 


patient = Blueprint('patient', __name__, template_folder='templates')

@patient.route('/patient/<id>', methods=['GET','POST'])
def patient_route(id):
    #pat_id = request.args.get('id')
    print id
    return render_template("patient.html", thisvar=id)