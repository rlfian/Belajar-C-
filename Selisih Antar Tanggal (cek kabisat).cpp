#include <iostream>
using namespace std;

bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int hariDalamBulan(int bulan, int tahun) {
    if (bulan == 2) return isKabisat(tahun) ? 29 : 28;
    if (bulan==4 || bulan==6 || bulan==9 || bulan==11) return 30;
    return 31;
}

long hitungHari(int d, int m, int y) {
    long total = 0;
    for (int i=1; i<y; i++) total += isKabisat(i) ? 366 : 365;
    for (int i=1; i<m; i++) total += hariDalamBulan(i,y);
    total += d;
    return total;
}

int main() {
    int d1,m1,y1,d2,m2,y2;
    cout << "Masukkan tanggal pertama (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;
    cout << "Masukkan tanggal kedua (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;

    long selisih = hitungHari(d2,m2,y2) - hitungHari(d1,m1,y1);
    cout << "Selisih hari: " << selisih << endl;
    return 0;
}
