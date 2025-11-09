//Задача 5.5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int minVal, maxVal, minIndex, maxIndex, temp;
    const int M = 5;
    const int N = 5;
    int arr[M][N] = {};

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rand() % 100 - 50;
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int j = 0; j < N; j++) {
        minVal = arr[0][j];
        maxVal = arr[0][j];
        minIndex = 0;
        maxIndex = 0;

        for (int i = 1; i < M; i++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minIndex = i;
            }
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxIndex = i;
            }
        }

        temp = arr[minIndex][j];
        arr[minIndex][j] = arr[maxIndex][j];
        arr[maxIndex][j] = temp;
    }

    cout << "Преобразованная матрица:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
