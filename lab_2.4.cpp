// Lab 2.4
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a, b, c;
	cout << "Введите три разных целых чисел: ";
	cin >> a >> b >> c;
	if (a == b || b == c || c == a){
		cout << "Ошибка! Введите три разных целых чисел правильно!!" << endl;
	}
	else {
		if (a > b && a > c) {
			cout << "Наибольшее число: " << a << endl;
		}
		if (b > a && b > c) {
			cout << "Наибольшее число: " << b << endl;
		}
		if (c > a && c > b) {
			cout << "Наибольшее число: " << c << endl;
		}
		if (a < b && a < c) {
			cout << "Наименьшее число: " << a << endl;
		}
		if (b < a && b < c) {
			cout << "Наименьшее число: " << b << endl;
		}
		if (c < a && c < b) {
			cout << "Наименьшее число: " << c << endl;
		}
	}
	system("pause");
	return 0;
}
