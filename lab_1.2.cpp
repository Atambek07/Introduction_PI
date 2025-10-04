// задача 2
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double a, a1, b, h, c, s, p;
	cout << "Введите большое основание =";
	cin >> a;
	cout << "Введите малое основание =";
	cin >> a1;
	cout << "Введите высоту = ";
	cin >> h;
	c = (a - a1) / 2;
	b = sqrt(pow(h, 2) + pow((a - a1) / 2, 2));
	s = (a + a1) / 2 * h;
	p = a + a1 + b + b;
	cout << "Площадь =" << s << endl;
	cout << "Пертметр =" << p << endl;
	system("pause");
	return 0;
}

