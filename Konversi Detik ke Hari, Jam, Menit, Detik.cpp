#include <iostream>
using namespace std;

int main() {
    long detik; 
    cout << "Masukkan jumlah detik: ";
    cin >> detik;

    // 1 hari = 86400 detik
    int hari = detik / 86400;
    int sisa = detik % 86400;

    // 1 jam = 3600 detik
    int jam = sisa / 3600;
    sisa = sisa % 3600;

    // 1 menit = 60 detik
    int menit = sisa / 60;
    int detikAkhir = sisa % 60;

    cout << hari << " hari, " << jam << " jam, " 
         << menit << " menit, " << detikAkhir << " detik" << endl;
    return 0;
}
