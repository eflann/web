INSERT INTO Patient (firstname, lastinit, 1, 7, 1993) VALUES ("Sonya", "K");
INSERT INTO Patient (firstname, lastinit, 2, 8, 1993) VALUES ("Anna", "D");
INSERT INTO Patient (firstname, lastinit, 3, 9, 1993) VALUES ("Erin", "F");
INSERT INTO Patient (firstname, lastinit, 4, 10, 1993) VALUES ("Kelly", "H");
INSERT INTO Patient (firstname, lastinit, 5, 11, 1960) VALUES ("Dave", "C");
INSERT INTO Patient (firstname, lastinit, 6, 12, 1987) VALUES ("John", "M");
INSERT INTO Patient (firstname, lastinit, 7, 13, 1959) VALUES ("Jake", "C");
INSERT INTO Patient (firstname, lastinit, 8, 14, 1996) VALUES ("Jon", "B");
INSERT INTO Patient (firstname, lastinit, 9, 15, 1999) VALUES ("Hanna", "E");
INSERT INTO Patient (firstname, lastinit, 10, 16, 2007) VALUES ("Katie", "P");
INSERT INTO Patient (firstname, lastinit, 11, 17, 1998) VALUES ("Charlotte", "C");
INSERT INTO Patient (firstname, lastinit, 12, 18, 1989) VALUES ("Dan", "P");

INSERT INTO Symptoms (id, string) VALUES (1, "head");
INSERT INTO Symptoms (id, string) VALUES (2, "neck");
INSERT INTO Symptoms (id, string) VALUES (3, "shoulders");
INSERT INTO Symptoms (id, string) VALUES (4, "right upper arm");
INSERT INTO Symptoms (id, string) VALUES (5, "left upper arm");
INSERT INTO Symptoms (id, string) VALUES (6, "right lower arm");
INSERT INTO Symptoms (id, string) VALUES (7, "left lower arm");
INSERT INTO Symptoms (id, string) VALUES (8, "right hand");
INSERT INTO Symptoms (id, string) VALUES (9, "left hand");
INSERT INTO Symptoms (id, string) VALUES (10, "upper chest");
INSERT INTO Symptoms (id, string) VALUES (11, "right chest");
INSERT INTO Symptoms (id, string) VALUES (12, "left chest");
INSERT INTO Symptoms (id, string) VALUES (13, "stomach");
INSERT INTO Symptoms (id, string) VALUES (14, "upper back");
INSERT INTO Symptoms (id, string) VALUES (15, "lower back");
INSERT INTO Symptoms (id, string) VALUES (16, "right thigh");
INSERT INTO Symptoms (id, string) VALUES (17, "left thigh");
INSERT INTO Symptoms (id, string) VALUES (18, "right knee");
INSERT INTO Symptoms (id, string) VALUES (19, "left knee");
INSERT INTO Symptoms (id, string) VALUES (20, "right shin");
INSERT INTO Symptoms (id, string) VALUES (21, "left shin");
INSERT INTO Symptoms (id, string) VALUES (22, "right foot");
INSERT INTO Symptoms (id, string) VALUES (23, "left foot");
INSERT INTO Symptoms (id, string) VALUES (24, "right calf");
INSERT INTO Symptoms (id, string) VALUES (25, "left calf");

INSERT INTO Sensations (id, string) VALUES (1, "sharp pain");
INSERT INTO Sensations (id, string) VALUES (2, "dull pain");
INSERT INTO Sensations (id, string) VALUES (3, "burning");
INSERT INTO Sensations (id, string) VALUES (4, "itching");

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (1, 1, 2, 2)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (1, 2, 2, 2)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (1, 3, 2, 2)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (1, 8, 1, 3)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (2, 13, 1, 5)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (3, 21, 1, 5)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (3, 23, 1, 5)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (4, 10, 4, 4)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (4, 11, 4, 4)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (4, 12, 4, 4)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (5, 13, 3, 5)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (5, 1, 2, 2)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (6, 7, 1, 10)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (7, 1, 2, 2)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (7, 2, 2, 2)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (7, 3, 2, 2)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (7, 8, 1, 3)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (8, 13, 1, 5)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (9, 21, 1, 5)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (9, 23, 1, 5)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (10, 10, 4, 4)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (10, 11, 4, 4)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (10, 12, 4, 4)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (11, 13, 3, 5)
INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (11, 1, 2, 2)

INSERT INTO DataPoints (patient_id, symptom_id, sensation_id, intensity) VALUES (12, 7, 1, 10)


