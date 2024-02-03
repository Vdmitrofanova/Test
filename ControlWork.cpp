#include <iostream>
#include <ctime>
#include <vector>
#include <string>


/*Задание номер 3*/
void TwoDemension(int** arr, int numrow, int numcol) { //Здесь заполняем двумерный массив
    for (int row = 0; row < numrow; ++row) {
        for (int col = 0; col < numcol; ++col) {
            arr[row][col] = rand() % 70 +1; 
        }
    }
}
void showTwoDem(int** arr, int numrow, int numcol) { //Показываем двумерный массив
    std::cout << "Here you can see elements of ypur massive: " << std::endl;
    for (int row = 0; row < numrow; ++row) {
        for (int col = 0; col < numcol; ++col) {
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

int diagonal(int** arr, int numrow, int numcol) {
    int sum = 0;
    for (int i = 0; i < numrow; ++i) {
        sum += arr[i][numcol - i - 1];
    }
    return sum;
}





int main() {
    /*Task3*/
    int numrow;
    int numcol;
    std::cout << "Enter the number of rows in the array: " << std::endl;
    std::cin >> numrow;
    std::cout << "Enter the number of columns in the array: " << std::endl;
    std::cin >> numcol;

    int** arr = new int* [numrow]; // Составление двумерного массива
    for (int row = 0; row < numrow; ++row) {
        arr[row] = new int[numcol];
    }

    TwoDemension(arr, numrow, numcol);
    showTwoDem(arr, numrow, numcol);
    int sum = diagonal(arr, numrow, numcol);
    std::cout << "Summa na pobochnoy diagonali: " << sum << std::endl;


    for (int row = 0; row < numrow; ++row) { //Обнуление
        delete[] arr[row];
    }
    delete[] arr;

    return 0;
    
}

