# **CS 161A: Programming and Problem Solving I**

# Assignment 1: Weekly Payroll


## Introduction

During September, businesses across the United States take time to thank their payroll teams and reflect on all of the successful paydays of the past year. While technology has made it easier than ever for HR teams to pay their employees, crunching the numbers can still be a laborious task for payroll professionals. National Payroll Week serves as a reminder that there are dedicated professionals working hard everyday to ensure we get paid accurately and on time.


## Purpose

Recall, when we design a program to solve a problem, we break it down into steps a computer can execute. The purpose of this assignment is to develop an algorithm and a working C++ program for a simple weekly payroll calculation.

After completing this assignment you will be able to:

* Use C++ syntax to:  
  * read inputs from the user  
  * store the input into appropriate typed variable  
  * perform arithmetic calculations, and produce output

## Task

* Before you get started:

  * Check out the Sample Assignment 01 code \- [Sample1 Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a1-sample.cpp)

* To implement a simply weekly payroll program you will do the following:

  * Read the employee ID number (an **int**) from the user

  * Read the number of hours worked (an **int**) from the user

  * Read the hourly rate (an **int**) from the user

  * Read the federal withholding rate (an **int**, e.g., 10\)

  * You must read one input per line. Please see the sample run below. **This is part of the required coding construct.**

  * Your program should calculate the total gross pay, the Income Tax Withholding, and the net pay.

  * First calculate the total gross pay from the hours worked and the hourly rate inputs. 

  * Then calculate the Federal Tax withholding using the gross pay and the federal withholding rate.

  * Then calculate the Net Pay by subtracting the federal tax withholding from the gross pay.

  * Output the following:: 

    \-Total Gross Pay 

    \-Federal Tax Withholding

    \-Net Pay

    The [Sample1 Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a1-sample.cpp) shows you how to do this. 

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)

* First do this calculation on paper and pencil and make sure you get the same answers as my two sample runs shown below in the Criteria for Success.

* Print a goodbye message.

* **Use only the concepts we have learned so far.**

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!
```

```
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!

```



* Include **pseudocode** in part d of the design section.

* **Follow these Coding Construct Requirements:**

  * Must have all the right data types mentioned under Task.

  * You must read one input per line.

  * Print a welcome and goodbye message.


* Upload your plain text file to the D2L assignment by **Sunday**.
