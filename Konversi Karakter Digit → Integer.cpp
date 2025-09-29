#include <iostream>
using namespace std;

int main() {
    char karakter;
    cout << "Masukkan karakter digit: ";
    cin >> karakter;

    int nilai = karakter - '0'; // ASCII
    cout << "Nilai integer = " << nilai << endl;
    return 0;
}
