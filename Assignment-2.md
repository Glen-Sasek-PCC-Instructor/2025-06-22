# **CS 161A: Programming and Problem Solving I**

# Assignment 2: How many Calories?

## Introduction

How many calories and servings do you consume when you open up a package of Oreos?\! Did you know 5 cookies make up 1 serving and each serving has 160 calories?

## Purpose

In coding, division works a little differently than you may be used to. When you divide 7 / 5, the result is 1, not 1.4. This is because the computer is performing integer arithmetic. The purpose of this assignment is to figure out how to retain the decimal portion when dividing two integers\!

After completing this assignment you will be able to:

* Use type casting to change the data type of a variable in a calculation  
* Declare variables of the correct type for usage, to avoid wasting unnecessary memory  
* Use manipulators to format numeric output

## Task


* Before you get started:

  * Check out Sample Assignment A02 \- [Sample2Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a2-sample.cpp)


* Oreo Cookies would like you to write a program for their website. The program should prompt the user for the number of cookies they have eaten and display the number of servings and total calories. The program should perform the following steps:

  * Ask the user for the number of Oreo Cookies eaten **(whole cookies only, use an integer)**. 

  * Calculate the number of servings eaten **(double)**. 

  * Calculate the number of Calories consumed **(double)**.

  * Must use **static\_cast** when doing integer division, to get the answer in float.

  * Display a message telling the number of servings and calories.

* To calculate the number of servings and calories, you must know the following facts. Create **integer constants** to hold these values: 

* There are 5 cookies per serving.

* Each serving has 160 calories. 

* Display the number of servings in fixed point notation, rounded to one decimal place of precision. 

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 12

12 Oreos equals 2.4 servings!
You consumed 384.0 calories.

Keep eating Oreos!
```

```
Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 3

3 Oreos equals 0.6 servings!
You consumed 96.0 calories.

Keep eating Oreos!
```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)

* **Follow these Coding Construct Requirements:**

  * Must have all the right data types mentioned under Task.

  * Must have appropriate constants for cookies per serving and calories per serving.

  * All outputs must be formatted to 1 decimal place using the right manipulators.

  * Print a welcome and goodbye message.

## Additional Support

* [Integer Division](https://youtu.be/IJMj4hvQ9LM) video (stop at 3:10).  
* [Using static\_cast\<\> to do floating point division with integers](https://www.learncpp.com/cpp-tutorial/arithmetic-operators/)  
