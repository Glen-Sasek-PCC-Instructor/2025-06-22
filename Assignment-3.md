# **CS 161A: Programming and Problem Solving I**

# Assignment 3: Washington State Ferries

## Introduction

**It’s that time of the year\!\! Fall\!\!** There are many ways to get to the San Juan Islands, and each option is a unique and beautiful journey. The shorter your stay in the islands the more important it is to plan ahead. Booking activities, transportation, lodging, and dining in advance will make your trip run smoothly and you'll be more likely to get your first choices\!

## Purpose

There are times when we want our programs to execute differently, depending on the input. To do this we will use branch statements, or if/else statements, to choose which code to execute depending on the result of a conditional expression we create.

After completing this assignment you will be able to:

* Use if/else statements to perform different calculations depending on user input  
* Use relational (==, \!=, \>, \<, \>=, \<=) and logical operators (&&, ||, \!)  in expressions to produce Boolean results (true or false)

For optional fun, we recommend you check out  [Washington State Ferries Vehicle Reservations Home Page](https://secureapps.wsdot.wa.gov/ferries/reservations/vehicle/) to get their latest fare information and write an even more sophisticated program or bookmark it for later\!\!

## Task

* Before you get started:

  * Check out Sample Assignment A03 \- [Sample3Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a3-sample.cpp)



* Print the Ferries Fare Information menu to the user (see sample run and table below).

* Note that the Bike Charge is included in the Vehicle Fee. Meaning if they have a Vehicle do not ask for the Number of Bikes. See sample run below for clarification.

* **Your program must prompt the user for information exactly as shown in the sample run below. This is a required coding construct.**

* If the user enters an invalid answer for the first question (use a char for this question and if they answer anything other than y/n), you must output an error message and end the program.

* This question should accept both uppercase and lower case answers.

* If the user enters any invalid numbers, print an error message and end the program. This could be negative numbers for any numbers, or unreasonable amounts for the number of people. **No more than 20 people per group (not including the driver\!).**

* Calculate the total price based on the ticket type and number of tickets. 

* If the total price is over $100, output a message saying they get a free adult ticket for their next trip. Else output the difference and tell them how much they need to spend to earn the free ticket.

* Do not have any redundant code inside your if statements. You must have if else statements where appropriate or you may use switch statements.

* No goto statements or break statements allowed except inside a switch statement.

* Output the amount formatted to 2 decimal places with proper money formatting.

* Look at the sample run below for examples.

* Use this simplified fare table below for your calculations:

## Fare Information

Passenger and vehicle/driver fares are collected at Anacortes, while no fares are collected at Friday Harbor.

| Fare Description | Cost per ticket |
| ----- | ----- |
| **Vehicle Under 14' (less than 168”) & Driver** | $57.90 |
| **Adult (age 19 \- 64\)** | $14.95 |
| **Senior (age 65 & over) / Disability** | $7.40 |
| **Youth (age 6 \- 18\)** | $5.55 |
| **Bicycle Surcharge (included with Vehicle)** | $4.00 |

\* The pricing for these items are made up for this assignment. Please check out Washington State Ferries Vehicle Reservations Home Page to get their latest fare information.

## Criteria for Success

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): y

How many adults? 2
How many seniors? 1
How many youths? 0

Your total charge is $95.20

If you spend $4.80 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): a

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 2
How many seniors? 1
How many youths? 1
How many bikes? 2

Your total charge is $50.85

If you spend $49.15 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)     
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n
How many adults? -7

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!
```

```
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 12
How many seniors? 4
How many youths? 5
How many bikes? 2

Uh oh!! Too many people in your group. Split into 2 groups and try again!

Thank you for using Washington State Ferries Fare Calculator!
```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)


* **Follow these Coding Construct Requirements:**

  * Note that the Bike Charge is included in the Vehicle Fee. Meaning if they have a Vehicle do not ask for the Number of Bikes. See sample run for clarification.

  * Your program must prompt the user for information exactly as shown in the sample run.

  * This question should accept both uppercase and lower case answers.

  * Output the amount formatted to 2 decimal places with proper money formatting.

  * If the user enters any invalid or negative numbers, print an error message and end the program.

  * Print a welcome and goodbye message.


## Additional Support

* [Relational Operators](https://youtu.be/Sz2XNQAIFpM) video (the video incorrectly calls them Logical operators).  
* [Logical Operators](https://youtu.be/NeXy2IRv-BQ) video (the video calls them Boolean operators).  

