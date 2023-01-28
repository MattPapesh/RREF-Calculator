#ifndef FRACTION_H
#define FRACTION_H

/**
 * @brief
 * 
 * 
 */
class Fraction
{
    private:

    int numerator = 0;
    int denominator = 0;

    public:

    Fraction(int numerator, int denominator);

    void set(int numerator, int denominator);
    int getNumerator();
    int getDenominator();
    double getDecimal();
};

#endif