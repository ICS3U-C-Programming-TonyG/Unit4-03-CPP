// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-04-15

// Description: Calculates the power for numbers from 0 to user number

#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Get user input
    std::string userInput;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> userInput;

    try {
        // Convert input to integer
        int number = std::stoi(userInput);

        // Check if the number is non-negative
        if (number < 0) {
            std::cout << "Error: Please enter a non-negative integer."
            << std::endl;
        } else {
            // Calculate and display squares of numbers from 0 to the input
            for (int counter = 0; counter <= number; counter++) {
                int result = std::pow(counter, 2);
                std::cout << counter << "^2 = " << result << std::endl;
            }
        }
    } catch (...) {
        std::cout << "Error: Invalid input. Please enter an integer."
        << std::endl;
    }
}
