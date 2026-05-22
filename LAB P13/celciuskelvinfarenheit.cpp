#include <iostream>
#include "konversi.h"
using namespace std;
int main() {
    double celcius;
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;

    double kelvin = celciusToKelvin(celcius);
    double fahrenheit = celciusToFahrenheit(celcius);

    cout << "Suhu dalam Kelvin: " << kelvin << " K" << endl;
    cout << "Suhu dalam Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}