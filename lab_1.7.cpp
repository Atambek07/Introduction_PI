#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double grams, kg, pricePerOunce, ounces, totalPrice, usd, som;
    const double ounceWeight = 31.1034768;
    
    cout << "Введите вес золота (кг): ";
    cin >> kg;

    cout << "Введите цену золота за унцию в Лондонском биржевом курсе, (USD): ";
    cin >> pricePerOunce;

    cout << "Введите курс доллара: ";
    cin >> usd;

	grams = kg * 1000;

    ounces = grams / ounceWeight;

    totalPrice = ounces * pricePerOunce;

    som = totalPrice * usd;

    cout << "\nВес золота в унциях: " << ounces << " унций" << endl;
    cout << "Стоимость золота по Лондонскому биржевому курсу: " << totalPrice << endl;
    cout << "Стоимость золота в Сомах: " << som << endl;

    system("pause");
    return 0;
}
