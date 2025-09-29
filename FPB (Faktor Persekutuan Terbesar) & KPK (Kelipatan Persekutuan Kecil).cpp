#include <iostream>
using namespace std;

// Fungsi untuk menghitung FPB
int fpb(int a, int b) {
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }
    return a;
}

// Fungsi untuk menghitung KPK
int kpk(int a, int b) {
    return (a * b) / fpb(a, b);
}

int main() {
    int x, y;
    cout << "Masukkan dua bilangan: ";
    cin >> x >> y;

    cout << "FPB = " << fpb(x, y) << endl;
    cout << "KPK = " << kpk(x, y) << endl;
    return 0;
}
