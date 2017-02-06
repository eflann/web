CREATE TABLE Patient
(
    id int IDENTITY(1,1) PRIMARY KEY,
	firstname  VARCHAR(20),         
	lastinit  VARCHAR(20)      
);

INSERT INTO Patient (firstname, lastinit) VALUES (Sonya, K);
INSERT INTO Patient (firstname, lastinit) VALUES (Anna, D);
INSERT INTO Patient (firstname, lastinit) VALUES (Erin, F);
INSERT INTO Patient (firstname, lastinit) VALUES (Kelly, H);
INSERT INTO Patient (firstname, lastinit) VALUES (Dave, C);
INSERT INTO Patient (firstname, lastinit) VALUES (John, M);