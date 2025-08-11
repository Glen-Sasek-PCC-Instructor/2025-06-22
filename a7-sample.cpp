/******************************************************************************
# Author:           Gayathri Iyer
# Assignment:       A07 Sample (CS161A)
# Date:             April 1, 2022
# Description:      This program will present a menu to the user to calculate the total calories burned based on the type of workout.
This calculation uses the MET value (Metabolic Equivalent of Task) of each activity. We multiply the MET value with the person\'s body weight in kilograms. Then we multiply this with 0.0175 and the duration in minutes to calculate the calories burned in kcals.
# Input:            (What the program asks for, and data type, e.g., string)
# Output:           (Summary of messages displayed by the program)
# Sources:          Assignment 7 specifications
#                   and any other substantial aids, like web pages or students
#                   who helped you.
#******************************************************************************/
// Neither comments nor code should be wider than 79 characters.
// The lines of asterisks above are 79 characters long for easy reference.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//constants for MET values and MET_FACTOR
const double CALS_FACTOR = 0.0175;
const double MET_STEP = 6.6;
const double MET_BOOT = 10.1;
const double MET_PILATES = 3.7;
const double MET_TAI = 3.3;
const double MET_ZUMBA = 8.8;

//main function
int main()
{
  //declare variables for input
  int userNum = 0;
  //declare variables for all output and support structure
  int maxNum = 0, minNum = 0, sum = 0, count = 0;
  double avg = 0;

  //welcome message
  cout << "Welcome to your Workout Summary Program!" << endl;
  cout << "MET Values for these activities:" << endl;
  cout << "Step Aerobics = 6.6" << endl;
  cout << "Bootcamp = 10.1" << endl;
  cout << "Pilates = 3.7" << endl;
  cout << "Tai Chi = 3.3" << endl;
  cout << "Zumba = 8.8" << endl;
  cout << endl << endl;

  //declare variables
  int userChoice = 0;
  int minutes = 0, weight = 0;  //input variables
  int totalMins = 0, calsBurned = 0, totalCals = 0;  //output variables
  //local variable to store constant based on conditions
  double met_factor = 0;    
  do
  {
    //get user input from user first
    cout << "Choose a Workout option from below:" << endl;
    cout << "1. Step Aerobics" << endl;
    cout << "2. Bootcamp" << endl;
    cout << "3. Pilates" << endl;
    cout << "4. Tai Chi" << endl;
    cout << "5. Zumba" << endl;
    cout << "6. Quit" << endl;
    cout << ">>";

    cin >> userChoice;
    //data validation for an int
    //This is repeated and we will write a function for this next week.
    while(!cin)
    {
      cout << "Invalid entry! Please try again!" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cin >> userChoice;
    }
    //data validation loop
    while(userChoice < 1 || userChoice > 6)
    {
      cout << "Invalid Choice! Please enter a number between 1 and 6." << endl;
      cin >> userChoice;
      //data validation for an int
      //This is repeated and we will write a function for this next week.

      while(!cin)
      {
        cout << "Invalid entry! Please try again!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> userChoice;
      }
    }
    if(userChoice != 6)
    {
      cout << "\nEnter your weight in kilograms: ";
      cin >> weight;
      //data validation for an int
      //This is repeated and we will write a function for this next week.

      while(!cin)
      {
        cout << "Invalid entry! Please try again!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> userChoice;
      }
      cout << "Enter number of minutes for this workout:";
      cin >> minutes;
      //data validation for an int
      //This is repeated and we will write a function for this next week.
      while(!cin)
      {
        cout << "Invalid entry! Please try again!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> userChoice;
      }
      //check userChoice and set the right MET values
      switch(userChoice)
      {
        case 1:
          met_factor = MET_STEP;
          break;
        case 2:
          met_factor = MET_BOOT;
          break;
        case 3:
          met_factor = MET_PILATES;
          break;
        case 4:
          met_factor = MET_TAI;
          break;
        case 5:
          met_factor = MET_ZUMBA;
          break;
        case 6:
          break;
        default:  
          cout << "Invalid Choice! Please enter a number between 1 and 6.\n" << endl;
      }
      //calculate calories burned for this activity
      //use the ceil function to round it up and store in an integer
      //otherwise the calories will be truncated and not rounded.
      calsBurned = ceil(met_factor * CALS_FACTOR  * weight * minutes);
      //calculate total minutes and total calories
      totalMins += minutes;
      totalCals += calsBurned;
      //print current activity Summary
      cout << "MET value for this activity = " << met_factor << endl;
      cout << "Minutes worked out for this activity = " << minutes << endl;
      cout << "Calories burned in this activity = " << calsBurned << " kcals\n" << endl;
    }
    }while(userChoice != 6);  //end do while
  //display overall Summary for all activities
  cout << "\nYour Workout Summary:" << endl;
  cout << "Total Minutes worked out = " << totalMins << endl;
  cout << "Total Calories burned = " << totalCals << " kcals" << endl;
  //print Thank you message
  cout << "Thank you for using my program!" << endl;

  //end program
  return 0;
}