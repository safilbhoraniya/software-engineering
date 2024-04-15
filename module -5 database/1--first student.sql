CREATE DATABASE COLLEGE;

USE COLLEGE;

CREATE TABLE student(
  ROLLNO INT PRIMARY KEY,
  NAME VARCHAR(50),
  BRANCH VARCHAR(50)
);

INSERT INTO student VALUES(1,'jay','computer science');
INSERT INTO student VALUES(2,'suhani','electronic and com');
INSERT INTO student VALUES(3,'kriti','electronic and com');

SELECT * FROM student;


