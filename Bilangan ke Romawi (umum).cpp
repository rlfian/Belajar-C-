#include <iostream>
#include <vector>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan bilangan positif: ";
    cin >> bilangan;

    if (bilangan <= 0) {
        cout << "Bilangan tidak valid" << endl;
        return 0;
    }

    vector<pair<int,string>> romawi = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    string hasil = "";
    for (auto &r : romawi) {
        while (bilangan >= r.first) {
            hasil += r.second;
            bilangan -= r.first;
        }
    }

    cout << "Angka Romawi: " << hasil << endl;
    return 0;
}
