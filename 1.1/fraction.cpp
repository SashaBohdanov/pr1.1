#include "fraction.h"
#include <iostream>

Fraction::Fraction() : first(0), second(1) {}

void Fraction::Init(int numerator, int denominator) {
    if (denominator == 0) {
        std::cerr << "Error: Denominator cannot be zero.\n";
        exit(EXIT_FAILURE);
    }
    first = numerator;
    second = denominator;
}

int Fraction::getNumerator() const {
    return first;
}

int Fraction::getDenominator() const {
    return second;
}

void Fraction::Read() {
    std::cout << "Enter numerator: ";
    std::cin >> first;

    std::cout << "Enter denominator: ";
    std::cin >> second;

    if (second == 0) {
        std::cerr << "Error: Denominator cannot be zero.\n";
        exit(EXIT_FAILURE);
    }
}

void Fraction::Display() const {
    std::cout << first << "/" << second;
}

int Fraction::ipart() const {
    if (second == 0) {
        std::cerr << "Error: Denominator is zero.\n";
        exit(EXIT_FAILURE);
    }

    return first / second;
}
