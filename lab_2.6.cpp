// Lab 2.6
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int	k;
	ret:cout << "Введите целое число от 1 до 100: ";
	cin >> k;
	if (k < 1 || k > 100) goto ret;
	if (k < 60) cout << "Ваш балл неудовлетворительный(F)" << endl;
	else if (k < 80 && k >= 60) cout << "Ваш балл удовлетворительный" << endl;
	else if (k >= 80 && k < 90) cout << "Ваш балл хороший" << endl;
	else cout << "Ваш балл отличный" << endl;
	system("pause");
	return 0;
}
