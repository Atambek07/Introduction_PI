// Задача 1.2. С помошью цикла while
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double x, y;
    double h = 0.1;
    double start = -2.5, end = 2.5;
    const double pi = 3.14159265358979323846;

    x = start;
    while (x <= end + 1e-9) {
        y = cos(3 * pi * x) + sin(pi * x * x) - exp(-x);
        cout << "x = " << x << "\t y = " << y << endl;
        x += h;
    }

    system("pause");
    return 0;
}
