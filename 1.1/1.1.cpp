#include "fraction.h"
#include <iostream>

int main() {
    int numerator, denominator;

    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    Fraction myFraction;
    myFraction.Init(numerator, denominator);

    std::cout << "Fraction: ";
    myFraction.Display();
    // Виведення цілої частини дробу на екран
    std::cout << "\nInteger part: " << myFraction.ipart() << std::endl;

    return 0;
}
