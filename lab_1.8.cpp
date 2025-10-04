#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    double x, a, L, n, m;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите a: ";
    cin >> a;

    n = sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4);
    m = exp(sqrt(fabs(a + x * pow(cos(x), 4))));

    L = n / m;

    cout << "Результат L = " << L << endl;

	system("pause");
    return 0;
}
