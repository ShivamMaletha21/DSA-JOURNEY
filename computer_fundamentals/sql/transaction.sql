-- Create the table and insert data
CREATE DATABASE BankDB;

USE BankDB;

CREATE TABLE Accounts (
    account_id INT PRIMARY KEY,
    account_holder VARCHAR(50),
    balance DECIMAL(10, 2)
);

INSERT INTO
    Accounts (
        account_id,
        account_holder,
        balance
    )
VALUES (1, 'Rahul', 5000.00),
    (2, 'Amit', 2000.00);

SELECT * FROM Accounts;

-- Cancel the transfer using ROLLBACK
START TRANSACTION;

-- Deduct ₹1,000 from Rahul
UPDATE Accounts SET balance = balance - 1000 WHERE account_id = 1;

-- Add ₹1,000 to Amit
UPDATE Accounts SET balance = balance + 1000 WHERE account_id = 2;

-- Cancel both changes
ROLLBACK;

-- Check balances
SELECT * FROM Accounts;

-- Option B: Save the transfer using COMMIT
START TRANSACTION;

-- Deduct ₹1,000 from Rahul
UPDATE Accounts SET balance = balance - 1000 WHERE account_id = 1;

-- Add ₹1,000 to Amit
UPDATE Accounts SET balance = balance + 1000 WHERE account_id = 2;

-- Save both changes
COMMIT;

-- Check balances
SELECT * FROM Accounts;

-- Q77 Begin a transaction, update one student's marks, and roll back the change.
CREATE DATABASE CollegeDB2;

USE CollegeDB2;

CREATE TABLE Students2 (
    student_id INT PRIMARY KEY,
    name VARCHAR(40),
    marks INT
);

INSERT INTO
    Students2 (student_id, name, marks)
VALUES (1, 'KARAN', 80),
    (2, 'ARJUN', 90),
    (3, 'SIMRAN', 73),
    (4, 'KL', 60),
    (5, 'DM', 89);

START TRANSACTION;

UPDATE STUDENTS2 SET MARKS = 55 WHERE student_id = 4;

ROLLBACK;

SELECT * FROM STUDENTS2;

-- Q78 Begin a transaction, update a student's marks, and commit the change.
START TRANSACTION;

UPDATE STUDENTS2 SET MARKS = 99 WHERE student_id = 3;

COMMIT;

-- Q79 Create a savepoint, make two updates, roll back to the savepoint, and explain which changes remain.
START TRANSACTION;

-- first update
UPDATE STUDENTS2 SET MARKS = 60 WHERE student_id = 2;

-- Create a checkpoint
SAVEPOINT sp1;

-- second update
UPDATE STUDENTS2 SET MARKS = 88 WHERE student_id = 4;

-- return to checkpoint 1
ROLLBACK TO sp1;

-- Save the remaining changes
COMMIT;

SELECT * FROM STUDENTS2;
-- HERE FIRST UPDATE WILL HAPPENS 2ND DOEST BCZ OF ROLLBACK