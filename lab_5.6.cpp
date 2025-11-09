//задача 5.6
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int temp;
    const int N = 5;
    const int M = 5;
    int arr[N][M] = {};

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 100;
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int j = 0; j < M - 1; j++) {
        for (int k = j + 1; k < M; k++) {
            if (arr[0][j] < arr[0][k]) {
                for (int i = 0; i < N; i++) {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }

    cout << "а) Массив, упорядоченный по убыванию элементов нулевой строки:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N - 1; i++) {
        for (int k = i + 1; k < N; k++) {
            if (arr[i][0] > arr[k][0]) {
                for (int j = 0; j < M; j++) {
                    temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }

    cout << "б) Массив, упорядоченный по возрастанию элементов нулевого столбца:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
