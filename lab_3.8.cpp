//Задача 8
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    cout << "Введите значение x: ";
    cin >> x;

    double S = 0;

    if (x > 20) {
        for (int k = 1; k <= x; k++) {
            S += (k * k - 1);
        }
    }
    else {
        S = 1;
        for (int i = 2; i <= x; i++) {
            S *= sin(i);
        }
    }

    cout << "S = " << S << endl;
    system("pause");
    return 0;
}
