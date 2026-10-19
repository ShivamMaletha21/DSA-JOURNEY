-- JOINS

-- INNER JOIN
CREATE DATABASE DEPARTMENT2;

USE DEPARTMENT2;

CREATE TABLE STUDENTS2 (
    student_id INT PRIMARY KEY,
    name VARCHAR(50),
    dept_id int
);

INSERT INTO
    STUDENTS2 VALUE (1, 'Rahul', 101),
    (2, 'karan', 102),
    (3, 'Arjun', 103),
    (4, 'Aman', 104),
    (5, 'Xaby', 105);

CREATE TABLE DEPARTMENT2 (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50)
);

INSERT INTO
    DEPARTMENT2 VALUE (101, 'COMPUTER SCIENCE'),
    (102, 'INFORMATION TECHNOLOGY'),
    (103, 'COMPUTER SCIENCE');

-- Applying Joins (Inner)
SELECT STUDENTS2.student_id, STUDENTS2.name, STUDENTS2.dept_id, DEPARTMENT2.dept_name
FROM STUDENTS2
    INNER JOIN DEPARTMENT2 ON STUDENTS2.dept_id = DEPARTMENT2.dept_id;

-- LEFT JOIN
-- Create database
CREATE DATABASE LEFTJOIN_DB;

USE LEFTJOIN_DB;

-- Create Students table (Left Table)
CREATE TABLE Students (
    student_id INT PRIMARY KEY,
    name VARCHAR(50),
    dept_id INT
);

-- Insert student records
INSERT INTO
    Students
VALUES (1, 'Rahul', 101),
    (2, 'Aman', 102),
    (3, 'Priya', 101),
    (4, 'Neha', 103),
    (5, 'Karan', NULL);

-- Create Departments table (Right Table)
CREATE TABLE Departments (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50)
);

-- Insert department records
INSERT INTO
    Departments
VALUES (101, 'Computer Science'),
    (102, 'Commerce'),
    (104, 'Mechanical');

-- APPLYING LEFT JOIN
SELECT Students.student_id, Students.name, Students.dept_id, Departments.dept_name
FROM Students
    LEFT JOIN Departments ON STUDENTS.dept_id = Departments.dept_id;

-- cross join
CREATE DATABASE IF NOT EXISTS CROSSJOIN_DB;

USE CROSSJOIN_DB;

-- create colors table
CREATE TABLE Colors (color VARCHAR(30));

-- Insert colors
INSERT INTO Colors VALUES ('Red'), ('Blue');

-- creta sizes table
CREATE TABLE Sizes (size VARCHAR(30));

-- insert sizes
INSERT INTO Sizes VALUES ('Small'), ('Large');

-- apply cross join
SELECT Colors.color, Sizes.size FROM Colors CROSS JOIN Sizes;
