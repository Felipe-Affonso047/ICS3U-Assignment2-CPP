// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program calculates volume of a square-based pyramid

#include <iostream>
#include <cmath>

int main()    {
    float baseLength;
    float baseWidth;
    float height;
    float volume;

    std::cout << "To calculate the volume of a square based pyramid:"
    << std::endl;
    std::cout << "\nWhat is the base length in cm?" << std::endl;
    std::cin >> baseLength;
    std::cout << "What is the base width in cm?" << std::endl;
    std::cin >> baseWidth;
    std::cout << "What is the height in cm?" << std::endl;
    std::cin >> height;

    volume = baseLength*baseWidth*height/3;

    std::cout << "\nVolume: " << (volume) << " cm³" << std::endl;
}
