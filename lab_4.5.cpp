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

	cout << "Последовательность a, b, c: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = " << a[i] << "\t" << "b[" << i << "] = " << b[i] << "\t" << "c[" << i << "] = " << c[i] << "\n";
	}
	cout << endl;

    for (int i = 0; i < N; i++) {
        d[i] = a[i];
        if (b[i] > d[i]) d[i] = b[i];
        if (c[i] > d[i]) d[i] = c[i];
    }

    cout << "Последовательность d: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "d[" << i << "] = " << d[i] << "\t";
        if ((i + 1) % 5 == 0)
            cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
