# **CS 161A: Programming and Problem Solving I**

# Assignment 4: Phrases and subphrases

## Introduction

A phrase is a small group of words that communicates a concept but isn’t a full sentence. You use phrases in your writing and your speech every day. There are lots of different kinds of phrases, some of which play a technical role in your writing and others that play a more illustrative role. No matter which role a phrase is playing, it’s achieving one simple goal: making your sentences richer by giving your words context, detail, and clarity.

## Purpose

In the last assignment you used branch statements, or if/else statements, to choose which code to execute depending on the result of a conditional expression using numbers. In this assignment you will continue to write conditional expressions using if statements for comparing strings of text.

After completing this assignment you will be able to:

* Use if/else statements to perform different string operations on a string input  
* Use the [find()](https://www.cplusplus.com/reference/string/string/find/) function, [substr](https://www.cplusplus.com/reference/string/string/substr/) function, and [string::npos](https://www.cplusplus.com/reference/string/string/npos/) constant to determine whether a particular string is in another string  
* Include the \<string\> header file in your program to access string functions

## Task

* Before you get started:

  * Check out Sample Assignment A04 \- [Sample4Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a4-sample.cpp)


* Your task is to write a program that reads two phrases on separate lines and outputs one of the four responses: (See Sample Run below in [Criteria for Success](#criteria-for-success))

  Phrase one is found within phrase two

  Phrase two is found within phrase one

  Both phrases match

  No matches

* Print a welcome message for your program.

* Prompt the user to enter the first phrase. Store in a **string** variable.

* Echo the phrase entered back to the screen.

* Prompt the user to enter the second phrase. Store in a **string** variable.

* Echo the phrase entered back to the screen.

* You must use the [find()](https://www.cplusplus.com/reference/string/string/find/) function, [substr](https://www.cplusplus.com/reference/string/string/substr/) function and [string::npos](https://www.cplusplus.com/reference/string/string/npos/) constant to do the following:

  * If the phrase 1 is found in phrase 2, then print Phrase 1 is found within phrase 2, and also print phrase 2 from the position where phrase 1 is found.

  * If the phrase 2 is found in phrase 1, then print Phrase 2 is found within phrase 1, and also print phrase 1 from the position where phrase 2 is found.

  * If the phrases match, then print Both phrases match.

  * If the phrases don’t match, then print No match.

* Print a Thank You message to end your program.

## Criteria for Success {#criteria-for-success}

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: truck
You entered: truck
Enter Phrase 2: firetruck is here
You entered: firetruck is here

truck is found in firetruck is here
truck is here

Thank you for using my program!
```

```
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: the green grass grows
You entered: the green grass grows
Enter Phrase 2: green grass
You entered: green grass

green grass is found in the green grass grows
green grass grows

Thank you for using my program!
```

```
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: He was between a rock and a hard place
You entered: He was between a rock and a hard place
Enter Phrase 2: rock
You entered: rock

rock is found in He was between a rock and a hard place
rock and a hard place

Thank you for using my program!
```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)

* Complete zyBooks section **CS161A 4\. Conditionals Part II** activities.

* Complete all sections of your Algorithmic Design Document.


* **Follow these Coding Construct Requirements:**

  * Must have all the right data types mentioned under Task.

  * Must use all the appropriate string functions.

  * Read the 2 phrases on separate lines as shown in the Sample Run.

  * Print a welcome and goodbye message.


## Additional Support

* [The string .find function reference](https://www.cplusplus.com/reference/string/string/find/)  
* [The string .substr() function reference.](https://www.cplusplus.com/reference/string/string/substr/)
