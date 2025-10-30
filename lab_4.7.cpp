//Задание 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    const int N = 25;
    int x[N] = {}, minBN, firstNeg = -1;

    for (int i = 0; i < N; i++) {
        x[i] = rand() % 51 - 25;
    }

    for (int i = 0; i < N; i++) {
        if (x[i] < 0) {
            firstNeg = i;
            break;
        }
    }

    if (firstNeg > 0) {
		cout << "Первый отрицательный элемент: " << x[firstNeg] << " на позиции " << firstNeg << endl;
        minBN = x[0];
        for (int i = 1; i < firstNeg; i++) {
            if (x[i] < minBN) minBN = x[i];
        }

        for (int i = firstNeg + 1; i < N; i++) {
            if (x[i] < 0) x[i] *= minBN;
        }

        cout << "Наименьший элемент до первого отрицательного: " << minBN << endl;
    }
    else if (firstNeg == 0) {
        cout << "Первый элемент отрицательный, до него нет элементов." << endl;
    }
    else {
        cout << "Отрицательных элементов нет." << endl;
    }

    cout << "Результат: ";
    for (int i = 0; i < N; i++) cout << x[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}
