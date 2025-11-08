//Задача 5.2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int sum, countPos, countNeg;
    const int N = 5;
    const int M = 5;
    int arr[N][M] = {};
    double avg;

    cout << "Массив:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 21 - 10;
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Среднее арифметическое положительных элементов каждой строки:" << endl;
    for (int i = 0; i < N; i++) {
        sum = 0;
        countPos = 0;
        for (int j = 0; j < M; j++) {
            if (arr[i][j] > 0) {
                sum += arr[i][j];
                countPos++;
            }
        }
        if (countPos > 0) {
            avg = (double)sum / countPos;
            cout << "Строка " << i << ": " << avg << endl;
        }
        else {
            cout << "Строка " << i << ": нет положительных элементов" << endl;
        }
    }
    cout << endl;

    cout << "Количество отрицательных элементов каждого столбца:" << endl;
    for (int j = 0; j < M; j++) {
        countNeg = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i][j] < 0) {
                countNeg++;
            }
        }
        cout << "Столбец " << j << ": " << countNeg << endl;
    }

    system("pause");
    return 0;
}
