#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int first;  // чисельник
    int second; // знаменник

public:
    // Конструктор за замовчуванням
    Fraction();

    // Метод ініціалізації
    void Init(int numerator, int denominator);

    // Константний метод для отримання значення чисельника
    int getNumerator() const;

    // Константний метод для отримання значення знаменника
    int getDenominator() const;

    // Метод для введення з клавіатури
    void Read();

    // Метод для виведення на екран
    void Display() const;

    // Метод для виділення цілої частини дробу
    int ipart() const;
};

#endif 

