# **CS 161A: Programming and Problem Solving I**

# Midterm Exam 

It’s that time again \- the Rock Collecting Championships are here\! Who will win the top three prizes?  

## Purpose

The purpose of this midterm exam is to test your knowledge of the concepts learned in this course so far:

* Variables and data types  
* Expressions  
* Input and output  
* Reading in strings with spaces  
* Data type casting  
* Conditionals

## Task

* Please take a look at the **sample run** below before you continue\!

* Write a program to output the winners of a Rock Collecting Competition.

* Prompt the user for three contestants: input their names as strings and the number of rocks collected as integers. 

* Contestant names may contain spaces, use getline() to read in the string. **(Coding construct requirement)**

* Include the contestant name in the prompt for the number of rocks. **(Coding construct requirement)**

* If the number of rocks entered is less than 0, print a warning and set the number of rocks to 0\. **(Coding construct requirement)**

* After the three contestants have been entered, determine the first, second and third place winners and print a message. Your logic must account for three way and two way ties (see sample run). Use appropriate conditional statements to write this code \- this is the coding construct you are being tested on.

* Calculate and print the average number of rocks collected \- the average should print two decimal places. You must define and use an integer constant NUM\_PLAYERS \= 3 for this calculation. **(Coding construct requirement)**

* Print a welcome and goodbye message.

* **Use only the concepts we have learned so far.**

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs

* Try other inputs to test different combinations of winners (1 and 2 tie for first, 2 and 3 tie for first, 1 and 3 tie for first, etc.).

```
Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!




Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57
Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!

```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)


* **Follow these Coding Construct Requirements:**

  * Contestant names may contain spaces, use getline() to read in the string. **(Coding construct requirement)**

  * Include the contestant name in the prompt for the number of rocks. **(Coding construct requirement)**

  * If the number of rocks entered is less than 0, print a warning and set the number of rocks to 0\. **(Coding construct requirement)**

  *  You must define and use an integer constant NUM\_PLAYERS \= 3 for the average rock calculation. **(Coding construct requirement)**

  * Print a welcome and goodbye message.


