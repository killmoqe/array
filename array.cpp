#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "RU");
    int rows, cols;
    std::cout << "Введите количество строк массива: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов массива: ";
    std::cin >> cols;

    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));

    // Заполнение массива числами
    std::cout << "Введите элементы массива:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> array[i][j];
        }
    }

    // Вывод массива
    std::cout << "Введенный массив:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Вычисление суммы чисел по диагонали
    int diagonalSum = 0;
    for (int i = 0; i < rows && i < cols; ++i) {
        diagonalSum += array[i][i];
    }

    std::cout << "Сумма чисел по диагонали массива: " << diagonalSum << std::endl;

    return 0;
}