#ifndef FRACTION_H
#define FRACTION_H

/**
 * @brief Used to express a mathematical fraction in terms of 
 * separate numerator and denominator integers; an alternative
 * to any approximated decimal values that may be experessed as
 * a float/double/etc.
 */

class Fraction
{
    private:

    int numerator = 0;
    int denominator = 1;

    public:

    /**
     * @brief Used to express a mathematical fraction in terms of 
     * separate numerator and denominator integers; an alternative
     * to any approximated decimal values that may be experessed as
     * a float/double/etc.
     * 
     * @param numerator Fraction numerator. 
     * @param denominator Fraction denominator. 
     */
    Fraction(int numerator, int denominator);
    Fraction();

    void set(int numerator, int denominator);
    Fraction getReciprocal();
    int getNumerator();
    int getDenominator();
    double getDecimal();
};

#endif