#include "../include/FractionalMath.h"
#include <cmath>

std::vector<int> FractionalMath::getMultiples(int number) {
    number = std::abs(number);
    std::vector<int> multiples = std::vector<int>();
    
    for(int current_multiple = number; current_multiple > 0; current_multiple--)
    {
        if(number % current_multiple == 0)
        {
            multiples.emplace_back(current_multiple);
            number = number / current_multiple;
        }
    }

    return multiples; 
}

Fraction FractionalMath::add(Fraction left_operand, Fraction right_operand) {
    int numerator = (left_operand.getDenominator() * right_operand.getNumerator())
    + (left_operand.getNumerator() * right_operand.getDenominator());
    int denominator = left_operand.getDenominator() * right_operand.getDenominator();
    return Fraction(numerator, denominator);
}

Fraction FractionalMath::subtract(Fraction left_operand, Fraction right_operand) {
    right_operand.set(-right_operand.getNumerator(), right_operand.getDenominator());
    return add(left_operand, right_operand);
}

Fraction FractionalMath::multiply(Fraction left_operand, Fraction right_operand) {
    int numerator = left_operand.getNumerator() * right_operand.getNumerator();
    int denominator = left_operand.getDenominator() * right_operand.getDenominator();
    return Fraction(numerator, denominator);
}

Fraction FractionalMath::divide(Fraction numerator, Fraction denominator) {
    denominator = denominator.getReciprocal();
    return multiply(numerator, denominator);
}

Fraction FractionalMath::simplifyFraction(Fraction fraction) {
    return Fraction(1,1);
}