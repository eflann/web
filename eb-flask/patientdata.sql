USE test;

ALTER TABLE DataPoints 
DROP FOREIGN KEY fk_pat;

ALTER TABLE DataPoints 
DROP FOREIGN KEY fk_sym;

ALTER TABLE DataPoints 
DROP FOREIGN KEY fk_sens;

DROP TABLE DataPoints;
DROP TABLE Sensations;
DROP TABLE Symptoms;
DROP TABLE Patient;
s
CREATE TABLE Patient
(
    id int NOT NULL AUTO_INCREMENT,
	firstname  varchar(20),         
	lastinit  varchar(2),
	dobmonth int,
	dobday int,
	dobyear int,
	PRIMARY KEY (id)
);


CREATE TABLE Symptoms
(
	id int NOT NULL,
	string varchar(120),
	PRIMARY KEY (id)
);

CREATE TABLE Sensations
(
	id int NOT NULL,
	string varchar(120),
	PRIMARY KEY (id)
);

CREATE TABLE DataPoints
(

	patient_id int NOT NULL,
	symptom_id int NOT NULL,
	sensation_id int NOT NULL,
	intensity int NOT NULL,

	FOREIGN KEY fk_pat(patient_id)
   	REFERENCES Patient(id),

   	FOREIGN KEY fk_sym(symptom_id)
   	REFERENCES Symptoms(id),

   	FOREIGN KEY fk_sens(sensation_id)
   	REFERENCES Sensations(id)

);

