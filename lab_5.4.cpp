//Задача 5.4
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int maxMain, minMain, maxSec, minSec;
    const int N = 5;
    int A[N][N] = {};
    double avg;

    cout << "Матрица:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 21 - 10;
            cout << "A[" << i << "][" << j << "] = " << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    maxMain = A[0][0];
    minMain = A[0][0];
    maxSec = A[0][N - 1];
    minSec = A[0][N - 1];

    for (int i = 0; i < N; i++) {
        if (A[i][i] > maxMain) maxMain = A[i][i];
        if (A[i][i] < minMain) minMain = A[i][i];

        if (A[i][N - 1 - i] > maxSec) maxSec = A[i][N - 1 - i];
        if (A[i][N - 1 - i] < minSec) minSec = A[i][N - 1 - i];
    }

    avg = (maxMain + minMain + maxSec + minSec) / 4.0;

    cout << "Макс главной диагонали: " << maxMain << endl;
    cout << "Мин главной диагонали: " << minMain << endl;
    cout << "Макс побочной диагонали: " << maxSec << endl;
    cout << "Мин побочной диагонали: " << minSec << endl;
    cout << "Среднеарифметическое этих значений: " << avg << endl;

    system("pause");
    return 0;
}
