#include <iostream>
using namespace std;

// Fungsi untuk menambahkan 1 detik pada jam
void tambahDetik(int &jam, int &menit, int &detik) {
    detik++;
    if (detik == 60) {
        detik = 0;
        menit++;
        if (menit == 60) {
            menit = 0;
            jam++;
            if (jam == 24) jam = 0;
        }
    }
}

int main() {
    int jam, menit, detik;
    cout << "Masukkan jam (0-23): ";
    cin >> jam;
    cout << "Masukkan menit (0-59): ";
    cin >> menit;
    cout << "Masukkan detik (0-59): ";
    cin >> detik;

    cout << "Waktu awal: " << jam << ":" << menit << ":" << detik << endl;

    tambahDetik(jam, menit, detik); // panggil fungsi

    cout << "Setelah ditambah 1 detik: " 
         << jam << ":" << menit << ":" << detik << endl;
    return 0;
}
