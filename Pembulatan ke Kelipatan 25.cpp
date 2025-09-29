#include <iostream>
using namespace std;

int main() {
    int belanja;
    cout << "Masukkan nilai belanja: ";
    cin >> belanja;

    int sisa = belanja % 25;
    int hasil = belanja - sisa; // dibulatkan ke bawah

    cout << "Nilai setelah dibulatkan: " << hasil << endl;
    return 0;
}
