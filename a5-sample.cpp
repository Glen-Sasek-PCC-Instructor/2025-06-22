/******************************************************************************
# Author:           Gayathri Iyer
# Assignment:       A05 Sample (CS161A)
# Date:             April 1, 2022
# Description:      This program will read numbers from the user until the user enters a sentinel of -1. When the user enters -1, the program will output the maximum in the list, the minimum in the list, the sum of the numbers and the average of the numbers rounded to 2 decimal places.
# Input:            (What the program asks for, and data type, e.g., string)
# Output:           (Summary of messages displayed by the program)
# Sources:          Assignment 5 specifications
#                   and any other substantial aids, like web pages or students
#                   who helped you.
#******************************************************************************/
// Neither comments nor code should be wider than 79 characters.
// The lines of asterisks above are 79 characters long for easy reference.

#include <iostream>
#include <iomanip>
using namespace std;

//constants
const int SENTINEL = -1;

//main function
int main()
{
  //declare variables for input
  int userNum = 0;
  //declare variables for all output and support structure
  int maxNum = 0, minNum = 0, sum = 0, count = 0;
  double avg = 0;

  //welcome message
  cout << "Welcome to my numbers program!!" << endl << endl;
  cout << "If you enter a list of numbers (-1 to stop), I will output the largest number, the smallest number, the sum and the average of all the numbers you entered." << endl;

  //get user input from user first
  cout << "Please enter a number (-1 to quit): ";
  cin >> userNum;
  //set maxNum and minNum to the first value the user enters.
  maxNum = userNum;
  minNum = userNum;
  //SENTINEL controlled while loop
  while(userNum != -1)
    {
      sum += userNum;          //add userNum to cumulative sum
      count++;                 //add 1 to counter.
      if (maxNum >= userNum)  //check for maxNum
      {
        maxNum = userNum;
      }
      if (minNum <= userNum)  //check for minNum
      {
        minNum = userNum;
      }
      //get user input from user again
      cout << "Please enter a number (-1 to quit): ";
      cin >> userNum;
    }  //end while loop here
    //find avg here
    avg = static_cast<double>(sum) / count;
  
    //print all values here.
    //set precision to 2 decimal places.
    cout << fixed << showpoint << setprecision(2);
    cout << "The largest number you entered is " << maxNum << endl;
    cout << "The smallest number you entered is " << minNum << endl;
    cout << "The sum of the numbers is " << sum << endl;
    cout << "The average of the numbers is "<< avg << endl;
      
  //end program
  return 0;
}
