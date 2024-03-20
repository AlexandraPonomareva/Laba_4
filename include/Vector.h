#ifndef VECTOR_H
#define VECTOR_H

#include "Matrix.h"

template <typename T>
class Vector : public Matrix<T> {
public:
    Vector(unsigned int size) : Matrix<T>(size, 1) {}

    T dotProduct(const Vector<T>& other) const; // Добавлено const
    T scalarProduct(const Vector<T>& other) const; // Добавлено const

    unsigned int getSize() const { return this->m; } // Добавлен метод для доступа к m
};

#include "../src/Vector.tpp"

#endif // VECTOR_H
