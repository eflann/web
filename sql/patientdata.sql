-- password for my instance of mysql is chesney'

USE mindfuldb;

DROP TABLE Doctor;
DROP TABLE Symptoms;
DROP TABLE Patient;

CREATE TABLE Doctor (
    id int NOT NULL AUTO_INCREMENT,
    firstname varchar(20),
    lastname varchar(20),
    email varchar(40),
    password varchar(20),
    PRIMARY KEY(ID)
);

CREATE TABLE Patient
(
    id int NOT NULL AUTO_INCREMENT,
    firstname  varchar(20),         
    lastinit  varchar(2),
    dobMonth int,
    dobDay int,
    dobYear int,
    PRIMARY KEY (id)
);

CREATE TABLE Symptoms
(
    patientID int NOT NULL,
    description varchar(120),
    severityLevel int,
    PRIMARY KEY (patientID)
);


INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES ("Sonya", "K", 5, 5, 1992);
INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES ("Anna", "D", 5, 5, 1992);
INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES ("Erin", "F", 5, 5, 1992);
INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES ("Kelly", "H", 5, 5, 1992);
INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES ("Dave", "C", 5, 5, 1992);
INSERT INTO Patient (firstname, lastinit, dobMonth, dobDay, dobYear) VALUES ("John", "M", 5, 5, 1992);

INSERT INTO Doctor (firstname, lastname, email, password) VALUES ("Anna", "Dodd", "annadodd@umich.edu", "rootroot");



