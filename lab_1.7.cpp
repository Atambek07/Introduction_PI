#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double grams;
    const double ounceWeight = 28.3495;   
    const double pricePerOunce = 3843.03; 

    cout << "Введите вес золота (г): ";
    cin >> grams;

    double ounces = grams / ounceWeight;

    double totalPrice = ounces * pricePerOunce;

    cout << "\nВес золота в унциях: " << ounces << " унций" << endl;
    cout << "Стоимость золота: " << totalPrice << " USD" << endl;

    system("pause");
    return 0;
}
