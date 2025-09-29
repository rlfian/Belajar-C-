#include <iostream>
using namespace std;

int main() {
    int pixel;
    cout << "Masukkan nilai pixel: ";
    cin >> pixel;

    if (pixel < 0) pixel = 0;
    if (pixel > 255) pixel = 255;

    cout << "Nilai pixel setelah clipping = " << pixel << endl;
    return 0;
}
