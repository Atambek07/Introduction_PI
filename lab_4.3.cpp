// Задание 3

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    const int N = 10;
    int arr[N] = {};
    int maxVal, minVal, maxIndex, minIndex, temp;

    cout << "Исходный массив: " << endl; 
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 41 - 20;
        cout << "Arr[" << i << "] = " << arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }

	cout << endl;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0)
            arr[i] /= 2;
        else
            arr[i] *= 2;
    }

    cout << "Массив после переоброзование: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Arr[" << i << "] = " << arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;

    maxVal = arr[0];
    minVal = arr[0];
    maxIndex = 0;
    minIndex = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        else if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    cout << "Индекс и значение максимального элемента: " << maxIndex << ", " << arr[maxIndex] << endl;
    cout << "Индекс и значени минимального элемента: " << minIndex << ", " << arr[minIndex] << endl;
    cout << endl;

    cout << "Результат: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Arr[" << i << "] = " << arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
