// Lab 2.7
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double sl, exp,  db, ov;
	cout << "Введите зарплату: ";
	cin >> sl;
	cout << "Введите стаж работы: ";
	cin >> exp;
	if (exp < 5) {
		db = 0;
	}
	else if (exp < 5 && exp < 10) {
		db = sl * 0.1;
	}
	else if (exp >= 10 && exp < 15) {
		db = sl * 0.20;
	}
	else {
		db = sl * 0.30;
	}
	ov = sl + db;
	cout << "Ваша основная зарплата: " << sl << endl;
	cout << "Ваша надбавка: " << db << endl;
	cout << "Ваша общая зарплата c учетом надбавкой: " << ov << endl;
	system("pause");
	return 0;
}
