#include "../include/Fraction.h"

Fraction::Fraction() {}
Fraction::Fraction(int numerator, int denominator) 
    :   numerator(numerator), denominator(denominator) {
    if(denominator == 0)
    {
        this->denominator = 1;
    }
}

void Fraction::set(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
    
    if(denominator == 0)
    {
        this->denominator = 1;
    }
}

Fraction Fraction::getReciprocal() {
    return Fraction(denominator, numerator);
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}