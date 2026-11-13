-- SET OPERATIONS IN SQL
--
CREATE DATABASE SET_DB;

USE SET_DB;

CREATE TABLE STUDENT_A (
    student_id INT PRIMARY KEY,
    st_name VARCHAR(30)
);

INSERT INTO
    STUDENT_A
VALUES (1, 'Amit'),
    (2, 'Rahul'),
    (3, 'Priya'),
    (4, 'Arjun');

CREATE TABLE STUDENT_B (
    student_id INT PRIMARY KEY,
    st_name VARCHAR(30)
);

INSERT INTO
    STUDENT_B
VALUES (1, 'Amit'),
    (2, 'Neha'),
    (3, 'Karan'),
    (4, 'Arjun');

-- APPLYING UNION , DONT ADD DUPLICATE VALUES
SELECT st_name FROM STUDENT_A UNION SELECT st_name FROM STUDENT_B;

-- APPLYING UNION ALL , SHOW EVERYTHING
SELECT st_name
FROM STUDENT_A
UNION ALL
SELECT st_name
FROM STUDENT_B;

-- APPLYING INTERSECT
SELECT st_name
FROM STUDENT_A INTERSECT
SELECT st_name
FROM STUDENT_B;

-- APPLYING EXCEPT
SELECT st_name FROM STUDENT_A EXCEPT SELECT st_name FROM STUDENT_B;

-- SUBQUERY
CREATE DATABASE SUB_DB2;

USE SUB_DB2;

CREATE TABLE STUDENTS (
    student_id INT PRIMARY KEY,
    name VARCHAR(30),
    marks INT
);

INSERT INTO
    STUDENTS
VALUES (1, 'Aman', 80),
    (2, 'Rahul', 60),
    (3, 'Priya', 90),
    (4, 'Neha', 70);

-- Question: Find students who scored more than the average marks.
SELECT name
FROM STUDENTS
WHERE
    marks > (
        SELECT AVG(marks)
        FROM STUDENTS
    );