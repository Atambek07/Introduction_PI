//Задание 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    const int N = 10;
    int arr[N] = {}, countEven, countPairs;
    countEven = 0, countPairs = 0;

    cout << "Массив: " << endl;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 3;
        cout << "Arr[" << i << "] = " << arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0) countEven++;
        if (i < N - 1 && arr[i] == arr[i + 1]) countPairs++;
    }

    cout << "Количество элементов с четными индексами и нечетных: " << countEven << endl;
    cout << "Количество пар одинаковых соседних элементов: " << countPairs << endl;

    system("pause");
    return 0;
}
