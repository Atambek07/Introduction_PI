#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int sum, maxSum, minSum;
    const int N = 5;
    int arr[N][N] = {};
    int nSum[N] = {};

    cout << "Матрица:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = rand() % 21 - 10;
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = 0; j < N; j++) {
            sum += arr[i][j];
        }
        nSum[i] = sum;
    }

    maxSum = nSum[0];
    minSum = nSum[0];

    for (int i = 1; i < N; i++) {
        if (nSum[i] > maxSum) maxSum = nSum[i];
        if (nSum[i] < minSum) minSum = nSum[i];
    }

    cout << "Суммы строк:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Строка " << i << ": " << nSum[i] << endl;
    }
    cout << endl;

    cout << "Наибольшая сумма: " << maxSum << endl;
    cout << "Наименьшая сумма: " << minSum << endl;

    system("pause");
    return 0;
}
