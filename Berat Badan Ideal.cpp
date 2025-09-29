#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float berat, tinggi;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggi;

    float ideal = tinggi - 100 - ((tinggi - 100) * 0.1);
    float selisih = abs(berat - ideal);

    if (selisih <= 2) cout << "Ideal" << endl;
    else cout << "Tidak ideal" << endl;
    return 0;
}
