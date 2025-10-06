// Задача 4
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n, s1, counter;
	s1 = 1;
	counter = 0;

	cout << "Введите целое число: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		s1 *= i;
		counter += s1;
	}
	
	cout << "Сумма факториалов от 1 до " << n << " равна " << counter << endl;
	system("pause");
	return 0;
}
