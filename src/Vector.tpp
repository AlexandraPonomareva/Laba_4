#include "../include/Vector.h"
#include <iostream>

template <typename T>
T Vector<T>::dotProduct(const Vector<T>& other) const {
    T result = 0;
    for (unsigned int i = 0; i < this->getSize(); ++i) { // Используем getSize()
        result += (*this)[i][0] * other[i][0];
    }
    return result;
}

template <typename T>
T Vector<T>::scalarProduct(const Vector<T>& other) const {
    // Предполагается, что векторы имеют одинаковую длину
    return this->dotProduct(other);
}