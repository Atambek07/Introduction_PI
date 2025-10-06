// Задача 6
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double s = 10.0;      
    double overall = 0.0; 
    double s10 = 0.0, s20 = 0.0, s30 = 0.0;
    int c1 = 0, c2 = 0;

    for (int i = 1; i <= 30; i++) {
        if (i > 1) s *= 1.1; 
        overall += s;

        if (i == 10) s10 = overall;
        if (i == 20) s20 = overall;
        if (i == 30) s30 = overall;

        if (s > 20 && c1 == 0) c1 = i;
        if (overall > 100 && c2 == 0) c2 = i;

        cout << "День " << i << ": " << s << " км" << endl;
    }

    cout << endl;
    cout << "Пробег за первые 10 дней: " << s10 << " км" << endl;
    cout << "Пробег за первые 20 дней: " << s20 << " км" << endl;
    cout << "Пробег за первые 30 дней: " << s30 << " км" << endl;
    cout << "Первый день, когда пробег больше 20 км: " << c1 << " день" << endl;
    cout << "Первый день, когда суммарный пробег больше 100 км: " << c2 << " день" << endl;

	system("pause");
    return 0;
}
