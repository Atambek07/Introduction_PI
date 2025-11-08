//Задача 5.1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
	setlocale(LC_ALL, "Russian");

    int maxEven, minMult, maxEvenN, maxEvenM, minMultN, minMultM;
    bool isEven, isMult;
    const int N = 5;
    const int M = 5;
    int arr[N][M] = {};
    maxEven = -1, minMult = 1000;
    maxEvenN = -1, maxEvenM = -1;
    minMultN = -1, minMultM = -1;
    isEven = false, isMult = false;

	cout << "Массив:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 100;
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
		cout << endl;
    }
	cout << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr[i][j] % 2 == 0) {
                if (!isEven || arr[i][j] > maxEven) {
                    maxEven = arr[i][j];
                    maxEvenN = i;
                    maxEvenM = j;
                    isEven = true;
                }
            }

            if (arr[i][j] % 3 == 0 && arr[i][j] % 7 != 0) {
                if (!isMult || arr[i][j] < minMult) {
                    minMult = arr[i][j];
                    minMultN = i;
                    minMultM = j;
                    isMult = true;
                }
            }
        }
    }

    if (isEven == true) {
        cout << "Максимальный четный: " << maxEven << " в позиции [" << maxEvenN << "][" << maxEvenM << "]" << endl;
    }
    else {
        cout << "Четные элементы не найдены" << endl;
    }

    if (isMult == true) {
        cout << "Минимальный кратный 3 и не кратный 7: " << minMult << " в позиции [" << minMultN << "][" << minMultM << "]" << endl;
    }
    else {
        cout << "Элементы кратные 3 и не кратные 7 не найдены" << endl;
    }

    system("pause");
    return 0;
}
