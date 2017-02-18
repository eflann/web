from flask import Flask, render_template
from extensions import connect_to_database
import controllers
import config

# Initialize Flask app with the template folder address
app = Flask(__name__, template_folder='templates')

# Register the controllers
app.register_blueprint(controllers.main)

# Set up upload folder
upload_folder = '/static/images/'
app.config['UPLOAD_FOLDER'] = upload_folder
app.config['SESSION_TYPE'] = 'filesystem'
app.secret_key = "secret_key"

# Listen on external IPs
# For us, listen to port 3000 so you can just run 'python app.py' to start the server
if __name__ == '__main__':
    # listen on external IPs
    app.run(host=config.env['host'], port=config.env['port'], debug=True)

