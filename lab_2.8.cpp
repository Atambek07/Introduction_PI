// Lab 2.8
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double distance, price, baseTariff, coeff;
    int hour, carType, tripNumber;
    string toll;

    cout << "Введите длину маршрута (км): ";
    cin >> distance;

    cout << "Введите текущее время (0–23): ";
    cin >> hour;

    cout << "Выберите тип автомобиля (1 – Эконом, 2 – Комфорт, 3 – Бизнес): ";
    cin >> carType;

    cout << "Введите номер текущей поездки за день: ";
    cin >> tripNumber;

    cout << "Есть ли платная трасса (да/нет): ";
    cin >> toll;

    if (hour >= 6 && hour < 22)
        baseTariff = 40;
    else
        baseTariff = 55;

    switch (carType) {
    case 1: coeff = 1.0; break; 
    case 2: coeff = 1.3; break; 
    case 3: coeff = 1.8; break;
    default:
        cout << "Ошибка: неверный тип автомобиля!" << endl;
        return 0;
    }

    price = distance * baseTariff * coeff;

 
    if (tripNumber == 5) {
        price *= 0.8; 
    }

    if (toll == "да" || toll == "Да" || toll == "ДА") {
        price += 100;
    }

    cout << "Полная стоимость поездки: " << price << " сом" << endl;

    return 0;
}
