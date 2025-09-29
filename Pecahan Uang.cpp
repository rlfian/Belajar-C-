#include <iostream>
using namespace std;

int main() {
    int uang;
    cout << "Masukkan jumlah uang (kelipatan 25): ";
    cin >> uang;

    int lembar1000 = uang / 1000;
    uang %= 1000;

    int lembar500 = uang / 500;
    uang %= 500;

    int lembar100 = uang / 100;
    uang %= 100;

    int lembar50 = uang / 50;
    uang %= 50;

    int lembar25 = uang / 25;

    cout << lembar1000 << " x Rp1000" << endl;
    cout << lembar500 << " x Rp500" << endl;
    cout << lembar100 << " x Rp100" << endl;
    cout << lembar50 << " x Rp50" << endl;
    cout << lembar25 << " x Rp25" << endl;

    return 0;
}
