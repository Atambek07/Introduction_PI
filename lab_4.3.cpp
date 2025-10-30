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

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 41 - 20;
    }

	cout << "Исходный массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
	}
	cout << endl;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0)
            arr[i] /= 2;
        else
            arr[i] *= 2;
    }

    maxVal = arr[0];
    minVal = arr[0];
    maxIndex = 0;
    minIndex = 0;

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    cout << "Результат: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Индекс максимального элемента: " << maxIndex << endl;
    cout << "Индекс минимального элемента: " << minIndex << endl;

    system("pause");
    return 0;
}
