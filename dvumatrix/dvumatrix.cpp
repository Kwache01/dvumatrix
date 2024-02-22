#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    const int rows = 3;
    const int columns = 5;
    std::vector<std::vector<double>> array(rows, std::vector<double>(columns));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "Введите элемент [" << i << "][" << j << "]: ";
            std::cin >> array[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        double sum = 0;
        for (int j = 0; j < columns; ++j) {
            sum += array[i][j];
        }
        double average = sum / columns;
        std::cout << "Среднее арифметическое для строки " << i << " равно " << average << "\n";
    }

    return 0;
}
