// Задача 1.1
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, h, p;
	cout << "Введите сторону a = ";
	cin >> a;
	cout << "Введите h = ";
	cin >> h;
	b = sqrt(pow(a / 2, 2) + pow(h, 2));
	p = a + 2 * b;
	cout << "Периметр равен " << p << endl;
	system("pause");
	return 0;
}
