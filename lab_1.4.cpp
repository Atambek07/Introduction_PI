#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

    int T;
    int H, M, S;

    cout << "Введите время в секундах: ";
    cin >> T;

    H = T / 3600;        
    M = (T % 3600) / 60; 
    S = T % 60;          

	cout << H << "час " << M << "мин " << S << "сек" << endl;

	system("pause");
    return 0;
}
