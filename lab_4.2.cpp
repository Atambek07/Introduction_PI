// Задание 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    const int N = 10;
    int arr[N] = {};
    int maxVal, minVal;

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 51 - 25;
    }

	cout << "Исходный массив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
	}

	cout << endl;

    maxVal = arr[0];
    minVal = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    int diff = maxVal - minVal;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 5 == 0 && arr[i] % 3 != 0) {
            arr[i] = diff;
        }
    }

    cout << "Результат: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
