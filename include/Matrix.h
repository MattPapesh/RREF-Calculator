#include <vector>
#include <memory>
#include "Fraction.h"

#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
    private:

    std::vector<std::vector<Fraction>> column_vectors = std::vector<std::vector<Fraction>>();
    int num_of_columns = 0;
    int num_of_rows = 0;

    void rescaleRow(int column_index, Fraction multiplier); 
    void swapRows(int primary_column_index, int secondary_column_index);
    

    public:

    Matrix(int num_of_rows, int num_of_columns);

    void setColumn(int column_index, Fraction coefficients[]);
    void setRow(int row_index, Fraction coefficients[]);
    std::vector<Fraction> getColumn(int column_index);
    int getNumOfRows();
    int getNumOfColumns();
};

#endif