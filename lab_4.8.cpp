//Задание 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    const int N = 20;
    int arr[N] = {}, countEven, countPairs;
    countEven = 0, countPairs = 0;

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 51 - 25;
    }

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0) countEven++;
        if (i < N - 1 && arr[i] == arr[i + 1]) countPairs++;
    }

    cout << "Массив: ";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Количество элементов с четными индексами и нечетных: " << countEven << endl;
    cout << "Количество пар одинаковых соседних элементов: " << countPairs << endl;

    system("pause");
    return 0;
}
