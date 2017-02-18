DROP TABLE Patient;
DROP TABLE Doctor;

CREATE TABLE Patient
(
    id int NOT NULL AUTO_INCREMENT,
    firstname  varchar(20),         
    lastinit  varchar(2),
    PRIMARY KEY (ID)
);

CREATE TABLE Doctor (
    id int NOT NULL AUTO_INCREMENT,
    firstname varchar(20),
    lastname varchar(20),
    email varchar(40),
    password varchar(20),
    PRIMARY KEY(ID)
);

INSERT INTO Patient (firstname, lastinit) VALUES ("Sonya", "K");
INSERT INTO Patient (firstname, lastinit) VALUES ("Anna", "D");
INSERT INTO Patient (firstname, lastinit) VALUES ("Erin", "F");
INSERT INTO Patient (firstname, lastinit) VALUES ("Kelly", "H");
INSERT INTO Patient (firstname, lastinit) VALUES ("Dave", "C");
INSERT INTO Patient (firstname, lastinit) VALUES ("John", "M");

INSERT INTO Doctor (firstname, lastname, email, password) VALUES ("Anna", "Dodd", "annadodd@umich.edu", "rootroot");