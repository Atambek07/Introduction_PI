// Задание 5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    srand(time(NULL));

    const int N = 10;
    int a[N] = {}, b[N] = {}, c[N] = {}, d[N] = {};

    for (int i = 0; i < N; i++) {
        a[i] = rand() % 51 - 25;
        b[i] = rand() % 51 - 25;
        c[i] = rand() % 51 - 25;
    }

	cout << "Последовательность a: ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
	}
	cout << endl;

	cout << "Последовательность b: ";
    for (int i = 0; i < N; i++) {
        cout << b[i] << " ";
	}
	cout << endl;

	cout << "Последовательность c: ";
    for (int i = 0; i < N; i++) {
		cout << c[i] << " ";
	}
	cout << endl;


    for (int i = 0; i < N; i++) {
        d[i] = a[i];
        if (b[i] > d[i]) d[i] = b[i];
        if (c[i] > d[i]) d[i] = c[i];
    }

    cout << "Последовательность d: ";
    for (int i = 0; i < N; i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
