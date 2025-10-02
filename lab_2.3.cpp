// Lab 2.3
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double x, y, r2;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    r2 = x * x + y * y;  

    if (r2 >= 1 * 1 && r2 <= 2 * 2) {
        cout << "Точка лежит в заштрихованной области." << endl;
    }
    else {
        cout << "Точка НЕ лежит в заштрихованной области." << endl;
    }

    return 0;
}
