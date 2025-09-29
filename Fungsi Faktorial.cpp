#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * faktorial(n - 1); // rekursif
}

int main() {
    int n;
    cout << "Masukkan bilangan n: ";
    cin >> n;

    cout << n << "! = " << faktorial(n) << endl;
    return 0;
}
