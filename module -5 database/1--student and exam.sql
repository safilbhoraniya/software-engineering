USE college;

CREATE TABLE student(
  rollno INT PRIMARY KEY,
  name VARCHAR(50),
  branch VARCHAR(50)
);

INSERT INTO student
(rollno,name,branch)
VALUES
 (1,"jay","computer science"),
 (2,"suhani","elecronic and com"),
 (3,"kriti","electronic and com");
 
CREATE TABLE exam(
 rollno INT PRIMARY KEY,
 s_code VARCHAR(50),
 marks INT NOT NULL,
 p_code VARCHAR(50)
);


INSERT INTO exam
(rollno,s_code,marks,p_code)
VALUES
(1,"CS11",50,"CS"),
(2,"CS12",60,"CS"),
(3,"EC101",66,"EC"),
(4,"EC102",70,"EC"),
(5,"EC101",45,"EC"),
(6,"EC102",50,"EC");

SELECT *FROM student;
SELECT *FROM exam;

(

 

 
