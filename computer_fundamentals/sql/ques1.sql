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

-- Q 12 Display the name and marks of every student.
SELECT name, marks FROM STUDENTS;

-- Q13 Display the name, city, and course of every student.
SELECT name, city, course FROM STUDENTS;

--  Q14 Insert a new student with ID 11, name Vikram, age 22, city Lucknow,
--  course BBA, marks 79, fees 40000, and email vikram@example.com.
INSERT INTO
    STUDENTS (
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
        11,
        'Vikram',
        22,
        'Lucknow',
        'BBA',
        79,
        40000,
        'vikram@example.com'
    );

-- Q15 Insert a student while omitting the email column.
-- What value will the email receive?... It will show NULL

INSERT INTO
    STUDENTS (
        student_id,
        name,
        age,
        city,
        course,
        marks,
        fees
    )
VALUES (
        12,
        'karan',
        22,
        'Lucknow',
        'BCA',
        79,
        40000
    );

-- Q16 Display only the first three columns of the students table.
SELECT student_id, name, age FROM STUDENTS;

-- Q17 Write a query that returns the number 100 without reading from a table.
SELECT 100;

-- Q18 Display the current date and time using a MySQL function.
SELECT NOW();

-- ------------------------------------------------------------------------------------------------------------------------------------
-- Level 3 — WHERE and conditions

-- Q19 Find all students whose marks are greater than 80.
SELECT * FROM STUDENTS WHERE marks > 80;

-- Q20 Find students whose marks are 60 or higher
SELECT * FROM STUDENTS WHERE marks >= 60;

-- Q21 Find students whose age is exactly 20.
SELECT * FROM STUDENTS WHERE age = 20;

-- Q22 Find students whose age is not 20.
SELECT * FROM STUDENTS WHERE age != 20;

-- Q23 Find students who live in Delhi.
SELECT * FROM STUDENTS WHERE city = 'Delhi';

-- Q24 Find students who do not live in Delhi.
SELECT * FROM STUDENTS WHERE city != 'Delhi';

-- Q25 Find students enrolled in BCA.
SELECT * FROM STUDENTS WHERE course = 'BCA';

-- Q26 Find students enrolled in BBA who scored more than 75
SELECT * FROM STUDENTS WHERE course = 'BBA' and marks > 75;

-- Q27 Find students who scored between 70 and 90, inclusive.
SELECT * FROM STUDENTS WHERE marks BETWEEN 70 AND 90;

-- Q28 Find students whose age is between 19 and 21, inclusive.
SELECT * FROM STUDENTS WHERE age BETWEEN 19 AND 21;

-- Q29 Find students who live in either Delhi or Mumbai using IN
SELECT * FROM STUDENTS WHERE CITY IN ('Delhi', 'Mumbai');

-- Q30 Write the same query as Question 29 using OR.
SELECT * FROM STUDENTS WHERE city = 'Delhi' OR city = 'Mumbai';

-- Q31 Find students who are not enrolled in BBA using NOT IN.
SELECT * FROM STUDENTS WHERE course NOT IN('BBA');

-- Q32 Find students whose marks are greater than 80 and whose age is less than 22.
SELECT * FROM STUDENTS WHERE marks > 80 AND age < 22;

-- Q33 Find students who live in Dehradun or have marks greater than 90.
SELECT * FROM STUDENTS WHERE city = 'Dehradun' OR marks > 90;

-- ------------------------------------------------------------------------------------------------------------------------------------

-- Level 4 — Sorting and pattern matching
-- Q34 Display all students ordered by marks from lowest to highest.

SELECT * FROM STUDENTS ORDER BY marks ASC;

-- Q35 Display all students ordered by marks from highest to lowest.
SELECT * FROM STUDENTS ORDER BY marks DESC;

-- Q36 Display students in alphabetical order by name.
SELECT * FROM STUDENTS ORDER BY name;

-- Q37 Display students ordered by course alphabetically and, within each course, by marks from highest to lowest.
SELECT * FROM STUDENTS ORDER BY course ASC, marks DESC;

-- Q38 Find students whose names begin with A.
SELECT * FROM STUDENTS WHERE name LIKE 'A%';

-- Q39 Find students whose names end with a.
SELECT * FROM STUDENTS WHERE name LIKE '%a';

-- Q40 Find students whose names contain the letter e.
SELECT * FROM STUDENTS WHERE name Like '%e%';

-- Q41 Find students whose names contain exactly four characters.
SELECT * FROM STUDENTS WHERE name LIKE '____';
-- WILL USE 4 dash ____

-- Q42 Find students whose names start with M and contain exactly five characters.
SELECT * FROM STUDENTS WHERE name LIKE 'M____';

-- Q43 Display the three students with the highest marks using ORDER BY and LIMIT.
SELECT * FROM STUDENTS ORDER BY marks DESC LIMIT 3;

-- Level 5 — Aggregate functions, GROUP BY and HAVING

-- Q 44 Count the total number of students.
SELECT COUNT(*) FROM STUDENTS;

-- Q45 Find the average marks of all students.
SELECT AVG(marks) FROM STUDENTS;

-- Q46 Find the highest marks obtained.
SELECT MAX(marks) FROM STUDENTS;

-- Q47 Find the lowest marks obtained.
SELECT MIN(marks) FROM STUDENTS;

-- Q48 Calculate the total fees across all student records.
SELECT SUM(fees) FROM STUDENTS;

-- Q49 Count how many students are enrolled in BCA.
SELECT COUNT(*) FROM STUDENTS WHERE course = 'BCA';

-- Q50 Count the number of students in each course.
SELECT course, COUNT(*) FROM STUDENTS GROUP BY course;
-- here GROUP BY course → groups rows by course.
-- COUNT(*) → counts the rows inside each particular group.

-- Q 51 Calculate the average marks for each course.
SELECT course, AVG(marks) FROM STUDENTS GROUP BY course;

-- Q52 Find the highest marks in each course.
SELECT course, MAX(marks) FROM STUDENTS GROUP BY course;

-- Q53 Find the lowest marks in each course.
SELECT course, MIN(marks) FROM STUDENTS GROUP BY course;

-- Q54 Display each city only once using DISTINCT.
SELECT DISTINCT city FROM STUDENTS;

-- Q55 Count the number of students from each city.
SELECT city, COUNT(*) FROM STUDENTS GROUP BY city;

-- Q56 Display only courses that have more than three students.
SELECT course, COUNT(*)
FROM STUDENTS
GROUP BY
    course
HAVING
    COUNT(*) > 3;

-- Q57 Display cities with at least two students.
SELECT city, COUNT(*)
FROM STUDENTS
GROUP BY
    city
HAVING
    COUNT(*) > 2;

-- Q58 Find courses whose average marks are greater than 75.
SELECT course, AVG(marks)
FROM STUDENTS
GROUP BY
    course
HAVING
    AVG(marks) > 75;

-- Remember: WHERE filters rows before grouping; HAVING filters groups after aggregation.

-- Level 6 — Constraints and ALTER TABLE

-- Q59 Create a departments table with department_id as its primary key and department_name as a required field.
CREATE DATABASE IF NOT EXISTS DEP;

USE DEP;

CREATE TABLE department (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(30) NOT NULL
);

-- Q60 Create a products table with product_id as the primary key,
--  product_name as required, and price as a decimal number.
CREATE TABLE Product (
    product_id INT PRIMARY KEY,
    product_name VARCHAR(30) NOT NULL,
    price DECIMAL(8, 2)
);

-- Q61 Modify the products table so that price must be greater than zero, using a CHECK constraint
ALTER TABLE Product ADD CONSTRAINT CHECK (price > 0);

SELECT * FROM PRODUCT;

-- Q62 Create a users table with a unique email address.
-- adding email column . Adding a column
ALTER TABLE PRODUCT ADD email VARCHAR(300);

ALTER TABLE PRODUCT ADD CONSTRAINT email UNIQUE (email);

-- Q63 Create a payments table with a status column that defaults to 'Pending'.
CREATE DATABASE PAY;

USE PAY;

CREATE TABLE payments ( status VARCHAR(30) DEFAULT 'Pending' );

-- to see values
INSERT INTO payments (status) VALUES (DEFAULT);

SELECT * FROM payments;

-- Q64 Add a phone column to the PRODUCT table.
ALTER TABLE PRODUCT ADD phone_col INT;

SHOW TABLES;

-- Q65 Add a date_of_birth column with the DATE data type
ALTER TABLE PRODUCT ADD date_of_birth DATE;

-- Q66 Change the maximum length of students.name to 100 characters.
ALTER TABLE PRODUCT MODIFY product_name VARCHAR(100);

-- Q67 Rename the phone column to phone_number, preserving its data type.
ALTER TABLE PRODUCT ADD phone_number INT;

ALTER TABLE PRODUCT RENAME COLUMN phone_number TO phone;

-- Q68 Remove the date_of_birth column.
ALTER TABLE PRODUCT DROP COLUMN date_of_birth;

-- Q69 Rename the courses table to college_courses.
ALTER TABLE PRODUCT ADD courses VARCHAR(40);

SELECT * FROM PRODUCT;

ALTER TABLE PRODUCT RENAME COLUMN courses TO college_courses;

-- Q70 Create a customers table with a primary key named customer_id.
CREATE DATABASE CUST;

USE CUST;

CREATE TABLE customers (customer_id INT PRIMARY KEY);

-- insert into customers
INSERT INTO CUSTOMERS (customer_id) values (1), (2), (3);

-- Q71 Create an orders table with order_id as its primary key and
-- buyer_id  as a foreign key referencing customers.

CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    buyer_id INT,
    FOREIGN KEY (buyer_id) REFERENCES customers (customer_id)
);
-- Your foreign key connects orders.buyer_id to customers.customer_id

-- insert into orders
INSERT INTO
    orders (order_id, buyer_id)
VALUES (101, 1),
    (102, 2),
    (103, 3);

SELECT * FROM customers;

SELECT * FROM orders;

-- Q72 Create a table where one column is both a
-- primary key and a foreign key, using a parent table and a child table.

-- parent table
CREATE TABLE persons ( person_id INT PRIMARY KEY, name VARCHAR(50) );

-- child table
CREATE TABLE person_details (
    person_id INT PRIMARY KEY, -- here this is primary key and also a foregin key
    address VARCHAR(100),
    FOREIGN KEY (person_id) REFERENCES persons (person_id)
);

