#include <iostream>
using namespace std;

int main() {
    int d1, m1, y1, d2, m2, y2;
    cout << "Masukkan tanggal pertama (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;
    cout << "Masukkan tanggal kedua (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;

    // Ubah ke total hari (asumsi 1 bulan = 30 hari, 1 tahun = 365 hari)
    long total1 = y1 * 365 + m1 * 30 + d1;
    long total2 = y2 * 365 + m2 * 30 + d2;

    long selisih = total2 - total1;

    // Konversi balik ke tahun, bulan, hari
    int tahun = selisih / 365;
    int sisa = selisih % 365;
    int bulan = sisa / 30;
    int hari = sisa % 30;

    cout << "Selisih: " << tahun << " tahun, " 
         << bulan << " bulan, " << hari << " hari" << endl;
    return 0;
}
