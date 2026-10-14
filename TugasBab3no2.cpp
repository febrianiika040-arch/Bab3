#include <iostream>
using namespace std;

int main() {
    double c;

    cout << "PROGRAM KONVERSI SUHU" << endl;
    cout << "Masukkan Suhu(Celcius) = ";
    cin >> c;

    double f = c * 9.0 / 5.0 + 32;
    double r = c * 4.0 / 5.0;
    double k = c + 273.15;

    cout << "Jadi,\t" << c << " derajat celcius    = " << f << " derajat fahrenheit" << endl;
    cout << "\t" << f << " derajat fahrenheit = " << r << " derajat reamur" << endl;
    cout << "\t" << r << " derajat reamur     = " << k << " derajat kelvin" << endl;

    return 0;
}
