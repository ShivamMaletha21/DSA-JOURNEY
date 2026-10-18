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

-- -------------------------------------------------------------------------------------------------------------------------------------

-- Level 7 — UPDATE, DELETE and transactions

CREATE DATABASE College;

USE COllege;

CREATE TABLE Students (
    student_id INT PRIMARY KEY,
    name VARCHAR(40),
    marks int
);

INSERT INTO
    Students (student_id, name, marks)
VALUES (1, 'KARAN', 80),
    (2, 'ARJUN', 90),
    (3, 'SIMRAN', 70),
    (4, 'KL', 60),
    (5, 'DM', 89);

SELECT * FROM Students;

-- Q73 Change the marks of student ID 3 to 75.
UPDATE Students SET marks = 73 WHERE student_id = 3;

ALTER TABLE Students ADD courses VARCHAR(30);

UPDATE Students SET courses = 'BCA' WHERE student_id = 1;

UPDATE Students SET courses = 'BBA' WHERE student_id = 2;

UPDATE Students SET courses = 'BBA' WHERE student_id = 3;

UPDATE Students SET courses = 'BCA' WHERE student_id = 4;

UPDATE Students SET courses = 'BBA' WHERE student_id = 5;

-- Q74 Increase the marks of every BCA student by 2.
UPDATE STUDENTS SET marks = marks + 2 WHERE courses = 'BCA';

SET SQL_SAFE_UPDATES = 0;

--  ADDING CITY
ALTER TABLE STUDENTS ADD city VARCHAR(30);

UPDATE STUDENTS SET city = 'Dehradun' WHERE student_id = 1;

UPDATE STUDENTS SET city = 'Delhi' WHERE student_id = 2;

UPDATE STUDENTS SET city = 'Jaipur' WHERE student_id = 3;

UPDATE STUDENTS SET city = 'Mumbai' WHERE student_id = 4;

UPDATE STUDENTS SET city = 'Chennai' WHERE student_id = 5;

SELECT * FROM STUDENTS;

-- Q75 Change the city of student ID 5 to Delhi
UPDATE STUDENTS SET city = 'Delhi' WHERE student_id = 5;

-- Q76 Delete the record for student ID 5.
DELETE FROM STUDENTS WHERE student_id = 5;