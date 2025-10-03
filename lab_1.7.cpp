// 1.7. 
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");   
    double kg;
    const double pricePerOunce = 1900.0;

    cout << "Введите вес золота (кг): ";
    cin >> kg;

    double ounces = kg * 31.103;

    double totalPrice = ounces * pricePerOunce;

    cout << "\nВес золота в тройских унциях: " << ounces << " унций" << endl;
    cout << "Стоимость золота: " << totalPrice << " USD" << endl;

	system("pause");
    return 0;
}
