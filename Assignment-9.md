# **CS 161A: Programming and Problem Solving I**

# Assignment 9: Find Min and Max using Functions


Data analysis is important in business **to understand problems facing an organization, and to explore data in meaningful ways**. Data in itself is merely facts and figures. Data analysis organizes, interprets, structures and presents the data into useful information that provides context for the data. 

## Purpose

The purpose of this assignment is to write functions to read data from a user, validate the data and do some data analysis.

After completing this assignment you will be able to:

* Write functions to modularize your program and reduce redundancy  
* Write functions that take parameters by value and return values  
* Write void functions that take nothing and return nothing  
* Write min and max algorithms  
* Do data validation for bad input data for numbers  
* Use the correct exit condition to exit out of a loop


## Task


* Your program must use the exact given function prototypes:

  void getInput(int \&num);

  void doStats(int num);

* Write a program that prompts a user for the number of positive integers (**0 is neither positive or negative)** they want to enter. Use this function prototype for this step: **void getInput(int \&num);** This function should not output any error messages \- that should be done in main().

* If a valid number was entered, call a function \- **void doStats(int num);** to do the following:

  * **Use a for loop** to prompt for each number, adding the position number in the prompt. Do not start at position 0\! (See sample run below).

  * **If the user enters a negative number or 0, print an error, and then prompt for the number again. Be careful \- you will need to adjust the counter variable in the for loop\!**

  * After the positive integers have been entered, list the minimum and maximum integers entered and the **first occurance** of the position they were entered (1, 2, 3, 4, 5, etc).  For example, if the user enters 4, 4, 5, 4, the minimum number is 4, and it was entered in position 1\.

  * Do not store all of the numbers, only the minimum, maximum, and the positions they were entered in.

* Include a welcome and goodbye message. (See sample run below). Use functions for these.

* Do not use arrays or any vectors for this program. Use only the concepts we have learned so far.

* Do not use strings for this program \- only integers.

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:


```
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 0
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? -9
No integers were entered.
Thank you for using my program.


Welcome to my Final Exam Practice.
How many positive integers do you want to process? 3
Enter integer #1: 1
Enter integer #2: 2
Enter integer #3: 3
The minimum number entered was 1 entered in position 1.
The maximum number entered was 3 entered in position 3.
Thank you for using my program.


How many positive integers do you want to process? 4
Enter integer #1: 2
Enter integer #2: 2
Enter integer #3: 2
Enter integer #4: 2
The minimum number entered was 2 entered in position 1.
The maximum number entered was 2 entered in position 1.
Thank you for using my program.


How many positive integers do you want to process? 4
Enter integer #1: 10
Enter integer #2: -9
Enter a positive integer!
Enter integer #2: 0
Enter a positive integer!
Enter integer #2: -3
Enter a positive integer!
Enter integer #2: 4
Enter integer #3: 3
Enter integer #4: -9
Enter a positive integer!
Enter integer #4: 5
The minimum number entered was 3 entered in position 3.
The maximum number entered was 10 entered in position 1.
Thank you for using my program.
```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)

* Check out Sample Assignment A09 \- [Sample9 Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a9-sample.cpp)

* Complete all sections of your Algorithmic Design Document. 

* **Follow these Coding Construct Requirements:**

  * Do not use arrays or any vectors for this program. Use only the concepts we have learned so far.

  * Do not use any strings for this program \- must be done with integers.

  * Must use all the given function prototypes under Task exactly as is. Function definitions must be written after **main()**.

  * If they enter 0, output No integers were entered \- and do not output anything else except for the **Thank you** message.

  * You must use a **for loop** for this program, no while loops.

