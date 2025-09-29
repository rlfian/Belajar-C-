#include <iostream>
using namespace std;

int hitungUmur(int thnL, int blnL, int tglL,
               int thnB, int blnB, int tglB) {
    int umur = thnB - thnL;
    if (blnB < blnL || (blnB == blnL && tglB < tglL)) umur--;
    return umur;
}

int main() {
    int tglL, blnL, thnL;
    int tglB, blnB, thnB;
    float harga;

    cout << "Masukkan tanggal lahir (dd mm yyyy): ";
    cin >> tglL >> blnL >> thnL;
    cout << "Masukkan tanggal keberangkatan (dd mm yyyy): ";
    cin >> tglB >> blnB >> thnB;
    cout << "Masukkan harga tiket: ";
    cin >> harga;

    int umur = hitungUmur(thnL, blnL, tglL, thnB, blnB, tglB);

    if (umur < 12) harga *= 0.75; // diskon 25%

    cout << "Harga yang harus dibayar: Rp" << harga << endl;
    return 0;
}
