-- Level 1 — Database and table basics

-- Q1 Write a query to create a database named CollegeDB.
CREATE DATABASE IF NOT EXISTS CollegeDB;

-- Q2 Write a query to select CollegeDB as your current database.
USE CollegeDB;

-- Q3 Write a query to display all databases available to your MySQL account.
SHOW DATABASES;

-- Q4 Create a table named courses with course_id (integer),course_name (maximum 50 characters), and duration_years (integer)
CREATE TABLE courses (
    course_id INT,
    course_name VARCHAR(50),
    duration INT
);

-- Q5 Create a table named teachers with teacher_id, teacher_name, and salary.
CREATE TABLE teachers (
    teacher_id INT,
    teacher_name VARCHAR(30),
    salary INT
);

--  Q6 Create a table named books with book_id, title, and author.
CREATE TABLE books (
    book_id INT,
    title VARCHAR(30),
    author VARCHAR(20)
);

-- Q7 Create a table named employees with id, name, age, and salary.
CREATE TABLE employees (
    id INT,
    name VARCHAR(30),
    age INT,
    salary INT
);

-- Q8 Display all tables in your currently selected database.
SHOW TABLES;

---------------------------------------------------------------------------------------------------------------------------------

-- Level 2 — INSERT and SELECT
-- Use the students table
-- Q9 Create a database named SQL_Lab only if it does not already exist.

CREATE DATABASE IF NOT EXISTS SQL_Lab;

- Level 2 — INSERT and SELECT
-- Use the students table

CREATE DATABASE IF NOT EXISTS SQL_Practise;

Use SQL_Practise;

CREATE TABLE students (
    student_id INT PRIMARY KEY,
    name VARCHAR(30) NOT NULL,
    age INT,
    city VARCHAR(40),
    course VARCHAR(30),
    marks INT,
    fees DECIMAL(8, 2),
    email VARCHAR(100) UNIQUE
);

INSERT INTO
    students (
        student_id,
        name,
        age,
        city,
        course,
        marks,
        fees,
        email
    )
VALUES (
        1,
        'Aman',
        20,
        'Delhi',
        'BCA',
        85,
        45000,
        'aman@example.com'
    ),
    (
        2,
        'Priya',
        21,
        'Dehradun',
        'BCA',
        92,
        45000,
        'priya@example.com'
    ),
    (
        3,
        'Rahul',
        19,
        'Delhi',
        'BBA',
        68,
        40000,
        'rahul@example.com'
    ),
    (
        4,
        'Neha',
        22,
        'Mumbai',
        'BCA',
        76,
        45000,
        'neha@example.com'
    ),
    (
        5,
        'Arjun',
        20,
        'Dehradun',
        'BBA',
        88,
        40000,
        'arjun@example.com'
    ),
    (
        6,
        'Sneha',
        21,
        'Jaipur',
        'BCA',
        59,
        45000,
        'sneha@example.com'
    ),
    (
        7,
        'Karan',
        23,
        'Mumbai',
        'BBA',
        73,
        40000,
        'karan@example.com'
    ),
    (
        8,
        'Meera',
        19,
        'Delhi',
        'BCA',
        95,
        45000,
        'meera@example.com'
    ),
    (
        9,
        'Rohit',
        22,
        'Jaipur',
        'BBA',
        81,
        40000,
        'rohit@example.com'
    ),
    (
        10,
        'Isha',
        20,
        'Dehradun',
        'BCA',
        64,
        45000,
        'isha@example.com'
    );

-- displays all columns and all rows from the students table
SELECT * FROM STUDENTS;

-- counts the total number of rows
SELECT COUNT(*) FROM STUDENTS;