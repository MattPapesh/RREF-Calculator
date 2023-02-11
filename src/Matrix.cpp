#include "../include/Matrix.h"

Matrix::Matrix(int num_of_rows, int num_of_columns) 
    :   num_of_rows(num_of_rows), num_of_columns(num_of_columns) {
    column_vectors.resize(num_of_columns);
    for(int i = 0; i < num_of_columns; i++)
    {
        std::vector<Fraction> current_column_vector = column_vectors.at(i);
        current_column_vector.resize(num_of_rows);
        column_vectors.assign(i, current_column_vector);
    }
}
    
void Matrix::setColumn(int column_index, Fraction coefficients[]) {
    for(int i = 0; column_index < num_of_columns && i < num_of_rows; i++)
    {
        std::vector<Fraction> current_column_vector = column_vectors.at(column_index);
        current_column_vector.assign(i, coefficients[i]);
        column_vectors.assign(column_index, current_column_vector);
    }
}

void Matrix::setRow(int row_index, Fraction coefficients[]) {
    std::vector<Fraction> row_vector = std::vector<Fraction>(num_of_columns);
    for(int i = 0; row_index < num_of_rows && i < num_of_columns; i++)
    {
        std::vector<Fraction> current_column_vector = column_vectors.at(i);
        current_column_vector.assign(row_index, coefficients[i]);
        column_vectors.assign(i, current_column_vector);
    }
}

std::vector<Fraction> Matrix::getColumn(int column_index) {
    if(column_index >= 0 && column_index < num_of_columns)
    {
        return column_vectors.at(column_index);
    }

    return std::vector<Fraction>(num_of_rows);
}

int Matrix::getNumOfRows() {
    return num_of_rows;
}

int Matrix::getNumOfColumns() {
    return num_of_columns;
}