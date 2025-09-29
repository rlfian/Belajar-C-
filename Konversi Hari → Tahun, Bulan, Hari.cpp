#include <iostream>
using namespace std;

int main() {
    int hari;
    cout << "Masukkan jumlah hari: ";
    cin >> hari;

    // 1 tahun = 365 hari
    int tahun = hari / 365;
    int sisa = hari % 365;

    // 1 bulan = 30 hari
    int bulan = sisa / 30;
    int sisaHari = sisa % 30;

    cout << tahun << " tahun, " << bulan << " bulan, " 
         << sisaHari << " hari" << endl;
    return 0;
}
