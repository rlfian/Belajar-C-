#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan bilangan (1-10): ";
    cin >> bilangan;

    string romawi[11] = {"", "I", "II", "III", "IV", "V", 
                         "VI", "VII", "VIII", "IX", "X"};

    if (bilangan >= 1 && bilangan <= 10) {
        cout << "Angka Romawi: " << romawi[bilangan] << endl;
    } else {
        cout << "Bilangan di luar jangkauan" << endl;
    }
    return 0;
}
