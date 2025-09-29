#include <iostream>
#include <map>
using namespace std;

int main() {
    string hari1, hari2;
    cout << "Masukkan hari pertama: ";
    cin >> hari1;
    cout << "Masukkan hari kedua: ";
    cin >> hari2;

    map<string,int> hari = {
        {"Senin",1},{"Selasa",2},{"Rabu",3},
        {"Kamis",4},{"Jumat",5},{"Sabtu",6},{"Minggu",7}
    };

    int durasi = (hari[hari2] - hari[hari1] + 7) % 7;
    cout << "Durasi: " << durasi << " hari" << endl;
    return 0;
}
