-- password for my instance of mysql is chesney'

USE test;
DROP TABLE Patient;

CREATE TABLE Patient
(
    id int NOT NULL AUTO_INCREMENT,
	firstname  varchar(20),         
	lastinit  varchar(2),
	dobmonth int,
	dobday int,
	dobyear int,
	PRIMARY KEY (ID)
);

INSERT INTO Patient (firstname, lastinit) VALUES ("Sonya", "K");
INSERT INTO Patient (firstname, lastinit) VALUES ("Anna", "D");
INSERT INTO Patient (firstname, lastinit) VALUES ("Erin", "F");
INSERT INTO Patient (firstname, lastinit) VALUES ("Kelly", "H");
INSERT INTO Patient (firstname, lastinit) VALUES ("Dave", "C");
INSERT INTO Patient (firstname, lastinit) VALUES ("John", "M");