#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    double x, a, c, L;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите с:";
    cin >> c;

    L = (sqrt(exp(x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (exp(sqrt(fabs(a + x * pow(c, 4)))));

    cout << "Результат L = " << L << endl;

	system("pause");
    return 0;
}
