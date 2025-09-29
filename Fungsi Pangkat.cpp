#include <iostream>
using namespace std;

long long pangkat(int a, int b) {
    long long hasil = 1;
    for (int i = 1; i <= b; i++) {
        hasil *= a;
    }
    return hasil;
}

int main() {
    int a, b;
    cout << "Masukkan bilangan basis: ";
    cin >> a;
    cout << "Masukkan pangkat: ";
    cin >> b;

    cout << a << "^" << b << " = " << pangkat(a, b) << endl;
    return 0;
}
