#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int umur;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan nama: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan umur: ";
    cin >> mhs.umur;

    cout << "\nData Mahasiswa:\n";
    cout << "Nama : " << mhs.nama << endl;
    cout << "NIM  : " << mhs.nim << endl;
    cout << "Umur : " << mhs.umur << endl;
    return 0;
}
