## General
* The controllers folder contains the code which generates dynamic web pages and the API that the patient-view route calls to submit to the database.
* The database schema is initialized with sql/patientdata.sql
* We created our patient-view using Unity and then exported it as a WebGL project. The WebGL project build is saved in static/unity and served when the patient navigates to /patient-view. 
* WebGL Documentation: https://developer.mozilla.org/en-US/docs/Web/API/WebGL_API

## Endpoints
* `/`: Homepage. Present search box. Anna.
* `/results`: Display search results. Erin.
* `/patient/<patient_id>`: Display patient data associated with the ID parameter. Sonya.
* `/patient-view`: Display HoloLens application using WebGL
* `/api/add_patient`: Add a new patient to the database


