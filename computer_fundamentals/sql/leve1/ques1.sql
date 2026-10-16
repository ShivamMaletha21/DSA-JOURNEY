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

-- Q9 Create a database named SQL_Lab only if it does not already exist.
CREATE DATABASE IF NOT EXISTS SQL_Lab;
