
Are you a runner, swimmer, or cyclist? Do you set goals and keep track of the number of miles each week? For your final exam, you will be writing a program to help a user set and keep track of their exercise goals\!  

## Purpose

The purpose of this final exam is to test your knowledge of the concepts learned in this course so far:

* Variables and data types  
* Expressions  
* Input and output  
* Conditionals (if/else, switch/case)  
* Accumulators  
* Loops  
* Functions with value and reference parameters

## Task

* Write a program to do the following:

  * Prompt a user for the number of miles they want to ride (walk, run, swim, whatever you want) this week. This is their goal. 

  * Write a function for the above task. **void getInput(int \&goal);**

  * If the user enters 0 or less, print a message that no miles were tracked this week. The message should be printed in **main()** and not in the function.

  * If a valid number of miles is entered, you **must** call another function \- 

    * **int calcTotal();**

  * In this function, use a for loop to prompt for the number of miles ridden each day for a week. Include the day of the week (Sunday, Monday, etc) in your prompt. 

  * If the user enters a number less than 0, print an error message and prompt for the same day again. (See sample run below).

  * After all of the days have been entered, calculate the total miles for the week and return to **main()**.

  * In **main()**, print a message with the total miles for the week and a message if they met their goal, were over their goal, or under their goal. Include the number of miles they were over or under in your message.

* Include a welcome and goodbye message. (See sample run below). Use functions for these.

* Do not use arrays or any vectors for this program. Use only the concepts we have learned so far.

* Do not use strings for this program \- only integers.

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!

```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete the Design section and Code section. Leave zyBooks and Discussion blank, otherwise complete the exam like an assignment.

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)

