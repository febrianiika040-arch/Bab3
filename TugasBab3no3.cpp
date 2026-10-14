#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double r, t;

    cout << "=== Program Menghitung Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> r;
    cout << "Masukkan tinggi tabung    : ";
    cin >> t;

    double volume = PI * r * r * t;

    cout << "Volume Tabung adalah: " << volume << endl;

    return 0;
}
