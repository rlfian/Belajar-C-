#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan panjang sisi segitiga (a b c): ";
    cin >> a >> b >> c;

    // Cek validasi segitiga
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Bukan segitiga yang valid" << endl;
    } else {
        // Tentukan sisi terbesar sebagai 'c'
        int sisi[] = {a, b, c};
        sort(sisi, sisi + 3);
        a = sisi[0]; b = sisi[1]; c = sisi[2];

        if (a*a + b*b == c*c) cout << "Segitiga Siku-siku" << endl;
        else if (a*a + b*b > c*c) cout << "Segitiga Lancip" << endl;
        else cout << "Segitiga Tumpul" << endl;
    }
    return 0;
}
