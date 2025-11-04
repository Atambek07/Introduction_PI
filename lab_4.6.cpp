// Задача 6

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    const int N = 26;
    int a[N] = {}, firstZero, sum, p, rmax, rmin;
    firstZero = -1, sum = 0, p = 1;

    cout << "Массив a: " << endl;
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 21 - 10;
        cout << "a[" << i << "] = " << a[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            firstZero = i;
            break;
        }
        sum += a[i];
        p *= a[i];
    }

    if (firstZero != -1 && firstZero < N - 1) {
        rmax = a[firstZero + 1];
        rmin = a[firstZero + 1];
        for (int i = firstZero + 1; i < N; i++) {
            if (a[i] > rmax) rmax = a[i];
            if (a[i] < rmin) rmin = a[i];
        }
    }

    if (firstZero != -1) {
        cout << "Номер первого нулевого элемента: " << firstZero << endl;
        cout << "Сумма элементов до нуля: " << sum << endl;
        cout << "Произведение элементов до нуля: " << p << endl;
        if (firstZero < N - 1) {
            cout << "Максимальный элемент после нуля: " << rmax << endl;
            cout << "Минимальный элемент после нуля: " << rmin << endl;
        }
    }
    else {
        cout << "В массиве нет нулевых элементов." << endl;
        cout << "Сумма всех элементов: " << sum << endl;
        cout << "Произведение всех элементов: " << p << endl;
    }

    system("pause");
    return 0;
}
