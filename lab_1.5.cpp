// задача 1.5
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int a, b, c, n, s, p;
	cout << "Введите трехзначное целое положительное число: ";
	cin >> n;
	a = n / 100;
	b = (n % 100) / 10;
	c = n % 10;
	s = a + b + c;
	p = a * b * c;
	cout << "Сумма цифр = " << s << endl;
	cout << "Произведение цифр = " << p << endl;
	system("pause");
	return 0;
}
