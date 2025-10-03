// Lab 2.5
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a, p, s, a1, a2, a3;
	cout << "Введите 3-x значный число: ";
	cin >> a;
	a1 = a / 100;
	a2 = (a / 10) % 10;
	a3 = a % 10;
	p = a1 * a2 * a3;
	s = a1 + a2 + a3;
	if (p > 100)
		cout << "Произведение цифр числа больше 100" << endl;
	else
		cout << "Произведение цифр числа меньше 100" << endl;
	if (s % 3 == 0)
		cout << "Сумма цифр числа кратна 3" << endl;
	else
		cout << "Сумма цифр числа не кратна 3" << endl;
	system("pause");
	return 0;
}
