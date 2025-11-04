// Задание 1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU"); 
    srand(time(NULL)); 

	int sp, pn;
    const int N = 20;

    int arr[N] = {};        

    cout << "Массив: " << endl;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 21 - 10;
        cout << "Arr[" << i << "] = " << arr[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }

    cout << endl;

    sp = 0;    
    pn = 1;    

    for (int i = 0; i < N; i++) {
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            sp += arr[i];
        }
        else if (arr[i] < 0 && arr[i] % 2 != 0) {
            pn *= arr[i];
        }
    }

    cout << "Сумма четных положительных элементов: " << sp << endl;

    cout << "Произведение нечетных отрицательных элементов: " << pn << endl;

	system("pause");
    return 0;
}
