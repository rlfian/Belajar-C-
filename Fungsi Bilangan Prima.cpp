#include <iostream>
using namespace std;

bool prima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    if (prima(n)) cout << n << " adalah bilangan prima\n";
    else cout << n << " bukan bilangan prima\n";
    return 0;
}
