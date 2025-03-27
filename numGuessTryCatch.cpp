// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: March 27, 2025
// This is a positive/negative/zero program that asks the user for an integer.

#include <iostream>
#include <string>

main() {
    // Define variables
    std::string numberAsString;
    int numberAsNumber;

    // Ask user for a number
    std::cout << "Enter a number: ";
    std::cin >> numberAsString;

    // Check if numberAsString is a number
    try {
        numberAsNumber = std::stoi(numberAsString);
        std::cout << "That number as an integer is " << numberAsNumber;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid number";
    }
}
