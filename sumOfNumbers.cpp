// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 5, 2022
// This program allows a user select a random number and then it
// calculates the sum of all whole numbers up to and including that number.
#include <iostream>
#include <iomanip>


int main() {
  int numberCounter = 0;
  int total = 0;
  int userNumInt;
  std::string userNum;

  std::cout << "This program will calculate the sum of all of the whole";
  std::cout << "numbers up to a chosen number.\n";
  std::cout << "Enter a positive number: ";
  std::cin >> userNum;
  std::cout << "\n";

  try {
      // Make sure user input is an integer
        userNumInt = std::stoi(userNum);

        // Makes sure that user number is positive
      if (userNumInt >= 0) {
        // Loop that calculates the sum of all of the whole numbers up to
        // and including the user number
        while (numberCounter <= userNumInt) {
        total = total + numberCounter;
        std::cout << "Tracking " << numberCounter;
        std::cout << " times through the loop\n";
        numberCounter = numberCounter + 1;
        }
        // Print final result
        std::cout << "The sum of all whole numbers from 0 to ";
        std::cout << userNum << " is " << total;

      } else {
          std::cout << userNumInt << " is not a positive number.\n";
      }
      } catch (std::invalid_argument) {
              std::cout << userNum << " is not a number\n";
      }
}
