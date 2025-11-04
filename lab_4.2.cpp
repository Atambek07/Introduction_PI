// Задание 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    const int N = 20;
    int arr[N] = {};
    int maxVal, minVal;

    cout << "Исходный массив: " << endl;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 51 - 25;
        cout << "Arr[" << i << "] = " << arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;

    }

	cout << endl;

    maxVal = arr[0];
    minVal = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        else if (arr[i] < minVal) minVal = arr[i];
    }

    int diff = maxVal - minVal;
    
    cout << "Максимальное значение: " << maxVal << endl;
    cout << "Минимальное значание: " << minVal << endl;
    cout << "Рзность: " << diff << endl;
    cout << endl;

    for (int i = 0; i < N; i++) {
        if (arr[i] % 5 == 0 && arr[i] % 3 != 0) {
            arr[i] = diff;
        }
    }

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
