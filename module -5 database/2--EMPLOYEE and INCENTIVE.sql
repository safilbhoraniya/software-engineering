CREATE DATABASE company;

USE company;

CREATE TABLE employee(
  employee_id INT PRIMARY KEY,
  first_name VARCHAR(50),
  last_name VARCHAR(50),
  salary INT ,
  joining_date VARCHAR(50),
  department VARCHAR(50)
);

INSERT INTO employee
(employee_id,first_name,last_name,salary,joining_date,department)
VALUES

(1,"john","abraham",1000000,"01-jan-13-12.00.00 AM","banking"),
(2,"michael","clarke",800000,"01-jan-13-12.00.00 AM","insurance"),
(3,"roy","thomas",700000,"01-feb-13-12.00.00 AM","banking"),
(4,"tom","jose",600000,"01-feb-13-12.00.00 AM","insurance"),
(5,"jerry","pinto",650000,"01-feb-13-12.00.00 AM","insurance"),
(6,"philip","mathew",750000,"01-JAN-13-12.00.00 AM","service"),
(7,"testName1","123",65000,"01-JAN-13-12.00.00 AM","service"),
(8,"testName2","Lname%",600000,"01-FEB-13-12.00.00 AM","insurance");

SELECT *FROM employee;

SELECT first_name,joining_date,salary FROM employee;
SELECT salary ascending FROM employee;
SELECT salary descending FROM employee;

CREATE TABLE incentive(
  employee_ref_id INT PRIMARY KEY,
  incentive_date VARCHAR(50),
  incentive_amount INT
);

INSERT INTO incentive
(employee_ref_id,incentive_date,incentive_amount)
VALUES

(1,"01-FEB-13",5000),
(2,"01-FEB-13",3000),
(3,"01-FEB-13",4000),
(4,"01-JAN-13",4500),
(5,"01-JAN-13",3500);

SELECT *FROM incentive
WHERE incentive_amount > 3000;

SELECT *FROM incentive;

