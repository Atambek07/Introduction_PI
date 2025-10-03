// задача 2
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c, h, s, p;
	cout << "Введите a, b, c, h = " << endl;
	cin >> a >> b >> c >> h;
	s = ((a + b) / 2) * h;
	p = a + b + 2 * c;
	cout << "Площадь = " << s << endl;
	cout << "Пертметр = " << p << endl;
	system("pause");
	return 0;
}
