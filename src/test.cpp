#include <iostream>
#include "../include/Matrix.h"
#include "../include/Vector.h"
#include "../include/SecondMax.h"

int main() {
    // Тестирование функции поиска второго максимума
    int arr[] = {1, 2, 3, 4, 5, 5};
    std::cout << "Index of the second maximum in arr: " << findSecondMaxIndex(arr, 6) << std::endl;

    // Тестирование класса Matrix
    Matrix<int> mat1(2, 2);
    mat1.fillRandom();
    std::cout << "Matrix 1:\n" << mat1 << std::endl;

    Matrix<int> mat2(2, 2);
    mat2.fillRandom();
    std::cout << "Matrix 2:\n" << mat2 << std::endl;

    Matrix<int> matSum = mat1 + mat2;
    std::cout << "Sum of matrices:\n" << matSum << std::endl;

    // Тестирование класса Vector
    Vector<int> vec1(3);
    vec1.fillRandom();
    std::cout << "Vector 1:\n" << vec1 << std::endl;

    Vector<int> vec2(3);
    vec2.fillRandom();
    std::cout << "Vector 2:\n" << vec2 << std::endl;

    std::cout << "Dot product of vectors: " << vec1.dotProduct(vec2) << std::endl;

    return 0;
}
