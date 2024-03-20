#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>


template <typename T>
class Matrix {
protected:
    T** data;
    unsigned int m;
    unsigned int n;

public:
    Matrix(unsigned int m, unsigned int n);
    ~Matrix();

    T* operator[](int i);
    const T* operator[](int i) const;

    void fillRandom();

    Matrix& operator+=(const Matrix& matrix);
    Matrix operator+(const Matrix& matrix) const;
    Matrix& operator-=(const Matrix& matrix);
    Matrix operator-(const Matrix& matrix) const;
    Matrix& operator*=(const Matrix& matrix);
    Matrix operator*(const Matrix& matrix) const;

    bool operator!=(const Matrix& matrix) const;
    bool operator==(const Matrix& matrix) const;

    unsigned int getRows() const { return m; }
    unsigned int getCols() const { return n; }

    T getElement(unsigned int i, unsigned int j) const {
        return data[i][j];
    }
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Matrix<T>& matrix);

#include "../src/Matrix.tpp"

#endif // MATRIX_H