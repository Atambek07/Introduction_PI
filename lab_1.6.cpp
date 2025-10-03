
// Задача 1.6.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double x1, x2, y1, y2, d;
	cout << "Введите координаты первой точки (x1, y1): ";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки (x2, y2): ";
	cin >> x2 >> y2;
	d = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
	cout << "Растояние двуч точек = " << d << endl;
	system("pause");
	return 0;
}
