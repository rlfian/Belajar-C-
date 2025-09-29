#include <iostream>
using namespace std;

int main() {
    int totalBelanja;
    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    float diskon = 0;
    if (totalBelanja > 100000) {
        diskon = totalBelanja * 0.1; // 10%
    }

    float totalBayar = totalBelanja - diskon;

    cout << "Diskon: Rp" << diskon << endl;
    cout << "Total bayar: Rp" << totalBayar << endl;
    return 0;
}
