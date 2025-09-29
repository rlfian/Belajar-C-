#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    // Cek habis dibagi 4
    if (bilangan % 4 == 0) {
        cout << bilangan << " adalah kelipatan 4" << endl;
    } else {
        cout << bilangan << " bukan kelipatan 4" << endl;
    }
    return 0;
}
