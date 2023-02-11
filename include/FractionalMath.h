#include <memory>
#include <vector>
#include "Fraction.h"

#ifndef FRACTIONAL_MATH_H
#define FRACTIONAL_MATH_H

namespace FractionalMath
{
    extern std::vector<int> getMultiples(int number);
    Fraction add(Fraction left_operand, Fraction right_operand);
    Fraction subtract(Fraction left_operand, Fraction right_operand);
    Fraction multiply(Fraction left_operand, Fraction right_operand);
    Fraction divide(Fraction numerator, Fraction denominator);
    Fraction simplifyFraction(Fraction fraction);
};

#endif