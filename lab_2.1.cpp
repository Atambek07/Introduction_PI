// Lab 2.1
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double x, y, c, k;
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	c = x * x + y * y;
	k = (x + y) * (x + y);
	cout << "Сумма квадратов = " << c << endl;
	cout << "Квадрат суммы двух чисел = " << k << endl;
	if (c > k)
		cout << "Сумма квадратов больше" << endl;
	else
		cout << "Квадрат суммы этих чисел больше" << endl;
	system("pause");
	return 0;
}
