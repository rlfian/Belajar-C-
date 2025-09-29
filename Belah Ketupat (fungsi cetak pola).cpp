#include <iostream>
using namespace std;

void belahKetupat(int n) {
    for (int i = 1; i <= n; i++) {
        for (int spasi = i; spasi < n; spasi++) cout << " ";
        for (int j = 1; j <= (2*i - 1); j++) cout << "*";
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--) {
        for (int spasi = n; spasi > i; spasi--) cout << " ";
        for (int j = 1; j <= (2*i - 1); j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Masukkan tinggi belah ketupat: ";
    cin >> n;
    belahKetupat(n);
    return 0;
}
