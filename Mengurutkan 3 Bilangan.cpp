#include <iostream>
#include <algorithm> // swap
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << "Urutan dari kecil ke besar: " 
         << a << " " << b << " " << c << endl;
    return 0;
}
