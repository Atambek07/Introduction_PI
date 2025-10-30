// Задание 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU"); 
    srand(time(NULL)); 

	int sp, pn;
	bool neg;
    const int N = 10;

    int arr[N] = {}; 

    cout << "Массив: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 21 - 10;
        cout << arr[i] << " ";
    }

    cout << endl;

    sp = 0;    
    pn = 1;    
    neg = false; 

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            sp += arr[i];
        }
        if (arr[i] < 0 && arr[i] % 2 != 0) {
            pn *= arr[i];
            neg = true;
        }
    }

    cout << "Сумма четных положительных элементов: " << sp << endl;

    if (neg != false)
        cout << "Произведение нечетных отрицательных элементов: " << pn << endl;
    else
        cout << "В массиве нет нечетных отрицательных элементов." << endl;

	system("pause");
    return 0;
}
