// Задача 1.1. С помошью цикла for
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double x, y;
    double h = 0.1;
    double start = -2.5, end = 2.5;
    const double pi = 3.14159265358979323846;

    for (x = start; x <= end + 1e-9; x += h) {
        y = cos(3 * pi * x) + sin(pi * x * x) - exp(-x);
        cout << "x = " << x << "\t y = " << y << endl;
    }

    system("pause");
    return 0;
}
