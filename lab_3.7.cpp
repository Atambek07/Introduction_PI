//задача 7
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double inv = 1000.0;
    double s100 = 0.0, s200 = 0.0;

    for (int i = 1; i <= 200; i++) {
        inv *= 1.05;
        if (i == 100) s100 = inv;
        if (i == 200) s200 = inv;
    }

    double usd100 = s100 * 2 * 1.34; 
    double usd200 = s200 * 2 * 1.34;

    cout << "Через 100 лет в каждом городе будет по " << s100 << " фунтов стерлингов." << endl;
    cout << "Через 200 лет в каждом городе будет по " << s200 << " фунтов стерлингов." << endl;
    cout << "Общая сумма через 100 лет: " << s100 * 2 << " фунтов стерлингов (" << usd100 << " долларов США)." << endl;
    cout << "Общая сумма через 200 лет: " << s200 * 2 << " фунтов стерлингов (" << usd200 << " долларов США)." << endl;

    system("pause");
    return 0;
}
