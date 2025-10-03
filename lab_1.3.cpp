// задача 1.3
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int x, y, a, g;
	cout << "Введите первое число = ";
	cin >> x;
	cout << "Введите второе число = ";
	cin >> y;
	a = (x + y) / 2;
	g = sqrt(abs(x) * abs(y));
	cout << "Среднее арифметическое =" << a << endl;
	cout << "Среднее геометрическое =" << g << endl;
	system("pause");
	return 0;
}
