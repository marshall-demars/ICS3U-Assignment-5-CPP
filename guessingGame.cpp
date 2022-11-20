// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Nov 2022
// This program calculates multiplication tables for user input

#include <iostream>

int main() {
    // This program calculates multiplication tables for user input

    int inputAsInt;
    int counter = 0;
    int product = 1;
    int TABLE_END = 10;
    std::string inputAsString;

    // Input
    std::cout << "Enter a positive number: ";
    std::cin >> inputAsString;

    // Process and Output
    try {
        inputAsInt = std::stoi(inputAsString);
        if (inputAsInt < 0) {
            std::cout << "\nPlease enter a positive number." << std::endl;
        } else {
            } while (counter < TABLE_END); {
            counter = counter + 1;
            product = inputAsInt * counter;
            std::cout << "\n"
                      << inputAsString << " x " << counter << " = "
                      << product << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input." << std::endl;
    }

    std::cout << ("\nDone.") << std::endl;
}
