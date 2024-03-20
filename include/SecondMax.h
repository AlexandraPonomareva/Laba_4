#ifndef SECONDMAX_H
#define SECONDMAX_H

template <typename T>
int findSecondMaxIndex(T* array, int size) {
    if (size < 2) {
        return -1; // Массив должен содержать хотя бы два элемента
    }

    T max1 = array[0];
    T max2 = array[0];

    for (int i = 1; i < size; ++i) {
        if (array[i] > max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2 && array[i] != max1) {
            max2 = array[i];
        }
    }

    if (max2 == array[0]) {
        return -1; // В массиве нет второго максимума
    }

    for (int i = 0; i < size; ++i) {
        if (array[i] == max2) {
            return i;
        }
    }

    return -1; // Ошибка, не должно произойти
}

#endif // SECONDMAX_H
