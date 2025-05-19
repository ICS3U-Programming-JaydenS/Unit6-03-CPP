// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created By: Jayden Smith
// Date: May 17, 2025
// This code gives you the max value from 10 nums

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

int min_value_finder(std::array<int, 10> numbers) {
    // Define my variables
    int min_value = numbers[0];

    // Checks which number is the smallest one
    for (int counter2 : numbers) {
        if (min_value > counter2) {
            min_value = counter2;
        } else {
            continue;
        }
    }
    // Returns the one that is the smallest
    return (min_value);
}

int main() {
    // Define my variables
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_VALUE = 0;
    const int MAX_NUM = 100;
    const int RANGE = MAX_NUM - MIN_VALUE;
    int randomNumber;
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Initialize seed
    srand((unsigned)time(NULL));

    // Generates the random numbers
    for (int counter = 0; counter < arrayOfInt.size(); counter++) {
        randomNumber = (rand() % RANGE + 1) + MIN_VALUE;
        arrayOfInt[counter] = randomNumber;
        std::cout << counter << " number: " << randomNumber << "\n";
    }
    // Calls the min value finder function
    int min_value = min_value_finder(arrayOfInt);

    // Displays min value
    std::cout << "The min value is " << min_value << "\n";
}
