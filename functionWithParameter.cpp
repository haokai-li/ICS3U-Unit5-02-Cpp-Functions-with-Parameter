// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about fahrenheit
#include <iostream>
#include <string>

void CalculateAreaTriangle(float length, float height) {
    // This Program is about fahrenheit
    float area;

    // process
    area = (length * height) / 2;

    // output
    std::cout << "The area of the triangle is "
    << area << " cm²." << std::endl;

    std::cout << "\nDone." << std::endl;
}

main() {
    // This function just call other functions
    std::string userLengthString;
    float userLengthNumber;
    std::string userHeightString;
    float userHeightNumber;

    std::cout << "Please enter the base length of a triangle(cm): ";
    std::cin >> userLengthString;
    std::cout << "Please enter the height of a triangle(cm): ";
    std::cin >> userHeightString;
    std::cout << "" << std::endl;

    try {
        userLengthNumber = std::stof(userLengthString);
        userHeightNumber = std::stof(userHeightString);

        // call functions
        CalculateAreaTriangle(userLengthNumber, userHeightNumber);
    } catch (std::invalid_argument) {
        // output
        std::cout << "You didn't enter an integer." << std::endl;

        std::cout << "\nDone." << std::endl;
    }
}
