# **CS 161A: Programming and Problem Solving I**

## Purpose

In this assignment you will be entering the number of people attending, the average number of slices per person and the cost of one pizza and you will continue asking the user for the number of people attending, the average number of slices per person and the cost of one pizza until they are done. While the user wants to add more input, you will add the data to **accumulators** (an accumulator is a variable the program uses to calculate a sum or product of a series of values) to perform statistical analysis after they are done.

After completing this assignment you will be able to:

* Use a do-while loop to prompt the user for at least one set of data for a pizza party.  
* Use an accumulator to keep track of the total number of pizzas, the total cost, and then the number of party entries entered by the user  
* Use a min/max algorithm to determine the party with the maximum number of people.  
* Calculate the average number of pizzas for the parties.

## Task


* When the program runs, you must read the number of people attending, the average number of slices per person and the cost of one pizza, separated by space exactly as shown in the sample run below. **This is part of the required coding construct.** 

* Assume there are 8 slices per pizza.

* Calculate the number of whole pizzas needed.

  * ***Hint:*** Use the **ceil()** function found in the **cmath** library to round up to the nearest whole number and convert to an **integer**. 

* Calculate and output the cost for all pizzas.

* Calculate and output the sales tax (7%). Calculate and output the delivery charge (20% of cost including tax).

* Calculate and output the total including pizza, tax and delivery.

* Prompt the user if they want to run the program again.

* When the user is finished entering the pizza and people information:

  * Display the number of party entries entered.

  * Calculate and display the average number of pizzas for the number of party entries entered. (must be a double displayed with one decimal)

  * Display the maximum number of people entered for a party.

  * Display the maximum cost of pizzas (total including tax and delivery) calculated for a party.

* Print a goodbye message.

* **Do not use any return or break statements inside your while loop.**

* **Use only the concepts we have learned so far.**

## Criteria for Success

* Look at the sample run below. Determine the variables you will need for the various calculations (your list may include other variables):

  * Number of people per party

  * Average number of slices per party

  * Cost of one pizza for a party

  * Total number of party entries by user

  * Total number of pizzas for all parties entered (accumulator)

  * Average number of pizzas for all the parties entered

  * Maximum number of people entered (use max algorithm, see additional resources section below)

  * Maximum cost of pizzas calculated for a party (use max algorithm)

* Test your program using the following sample runs, making sure you get the same output when using the given inputs:

```
Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

Number of pizzas: 4
Cost of pizzas:  $42.00
Tax:             $2.94
Delivery:        $8.99
Total Cost:      $53.93

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9   2.5   10.95

Number of pizzas: 3
Cost of pizzas:  $32.85
Tax:             $2.30
Delivery:        $7.03
Total Cost:      $42.18

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14   3.2   14.95

Number of pizzas: 6
Cost of pizzas:  $89.70
Tax:             $6.28
Delivery:        $19.20
Total Cost:      $115.17

Do you want to enter more (y/n): n

Number of entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.3
Maximum number of people: 14
Maximum cost of pizzas: $115.17

Thank you for using my program!
```

* To get started, open the [Assignment Template File](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/main.cpp), and make a copy.

* Complete all sections of the Assignment Template File. 

* You must express your algorithm as **pseudocode.** [Pseudocode Reference](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt)

* Check out Sample Assignment A05 \- [Sample5 Code](https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/a5-sample.cpp)

* Complete zyBooks section **CS161A 5\. Loops Part I** activities.

* Complete all sections of your Algorithmic Design Document.

* Include **pseudocode** in part d of the design document.

* **Follow these Coding Construct Requirements:**

  * Use a **do-while** loop to prompt the user for at least one set of data for a pizza party.  
  * When the program runs, you must read the number of people attending, the average number of slices per person and the cost of one pizza, separated by space exactly as shown in the sample run.

  * Display all statistics exactly as shown in the sample run.

  * Output all amounts formatted to 2 decimal places with proper money formatting.

  * Print a welcome and goodbye message.



## Additional Support

* [Finding the maximum and minimum from user input](https://youtu.be/RwqEqqqU9QI) video.  
* Section 5.1 Loops (general) in zyBooks has information on finding the maximum number.  

