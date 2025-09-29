#include <iostream>
using namespace std;

int main() {
    long cm;
    cout << "Masukkan jarak dalam cm: ";
    cin >> cm;

    // 1 km = 100000 cm
    int km = cm / 100000;
    int sisa = cm % 100000;

    // 1 m = 100 cm
    int m = sisa / 100;
    int cmAkhir = sisa % 100;

    cout << km << " km, " << m << " m, " << cmAkhir << " cm" << endl;
    return 0;
}
