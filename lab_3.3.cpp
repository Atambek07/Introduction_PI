// Задача 3
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
	int a, b, count;
	count = 0;
	cout << "Введите два целых числа (a < b): ";
	cin >> a >> b;

	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 && i % 4 != 0) {
			count += i * i;
		}
	}
	cout << "Сумма квадратов чисел, кратных 3 и не кратных 4: " << count << endl;
    system("pause");
    return 0;
}
