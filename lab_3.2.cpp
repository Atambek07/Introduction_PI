// Задача 2
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
	const double pi = 3.14159265358979323846;
    double x, y;
    double start = -pi / 2;
    double end = 2 * pi;
    double step = 0.2;

    for (x = start; x <= end + 1e-9; x += step) {
        if (x > 4) {
            double t = tan(x * x);
            if (t < 0 || isnan(t)) {
                cout << x << "\t  undef\n";
                continue;
            }
            y = sqrt(t);
        }
        else if (x >= 0 && x <= 4) {
            y = -2 * x;
        }
        else { 
            y = exp(-cos(x));
        }

        cout << x << "\t  " << y << endl;
    }

	system("pause");
    return 0;
}
