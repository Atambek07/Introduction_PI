// Задание 4

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    const int N = 30;
    int temps[N] = {};
    int maxTemp, minTemp, maxDay, minDay, lowZero = 0;
    double avgTemp, sum = 0;

    cout << "Массив: " << endl;
    for (int i = 0; i < N; i++) {
        temps[i] = rand() % 51 - 20;
        cout << "temps[" << i << "] = " << temps[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }

    cout << endl;

    maxTemp = temps[0];
    minTemp = temps[0];
    maxDay = 0;
    minDay = 0;

    for (int i = 0; i < N; i++) {
        if (temps[i] > maxTemp) {
            maxTemp = temps[i];
            maxDay = i;
        }
        else if (temps[i] < minTemp) {
            minTemp = temps[i];
            minDay = i;
        }
        if (temps[i] < 0) {
            lowZero++;
        }
        sum += temps[i];
    }

    avgTemp = sum / N;

    cout << "Максимальная температура: " << maxTemp << " (день " << maxDay + 1 << ")" << endl;
    cout << "Минимальная температура: " << minTemp << " (день " << minDay + 1 << ")" << endl;
    cout << "Средняя температура: " << avgTemp << endl;
    cout << "Количество дней с температурой ниже 0: " << lowZero << endl;

    system("pause");
    return 0;
}
