// Задача 5
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	double counter, c, s, r;
	c = 0; s = 0; r = 0, counter = 1;

	cout << "Введите число: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		c += cos(i);
		s += sin(i);
		if (s == 0) {
			continue;
		}
		r = c / s;
		counter *= r;
	}

	cout << "Произведение всех частных равно: " << counter << endl;

	system("pause");
	return 0;
}
