#include <iostream>
using namespace std;

int main() {
    int umur;
    cout << "Masukkan umur: ";
    cin >> umur;

    if (umur < 0) cout << "Umur tidak valid" << endl;
    else if (umur <= 12) cout << "Anak-anak" << endl;
    else if (umur <= 17) cout << "Remaja" << endl;
    else if (umur <= 59) cout << "Dewasa" << endl;
    else cout << "Lansia" << endl;

    return 0;
}
