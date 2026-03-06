// Buatlah sebuah program untuk menentukan gaji karyawan menggunakan operasi kondisi dengan ketentuan sebagai berikut:
// Golongan 1 memiliki gaji pokok Rp. 5.000.000,-
// Golongan 2 memiliki gaji pokok Rp. 3.000.000,-
// Golongan 3 memiliki gaji pokok Rp. 2.500.000,-
// Pajak yang dikenakan adalah 5% dari gaji pokok
// Setiap karyawan akan mendapatkan tambahan uang sebesar Rp. 500.000,- per anak jika memiliki 1 atau 2 anak
// Jika memiliki lebih dari 2 anak, tambahan yang diberikan hanya Rp 750.000,-
// Contoh output:
// Masukkan nama anda : Budi
// Masukan golongan (1,2,3) : 2
// Jumlah anak : 3
// Gaji total : Rp. 3.600.000,-

//Solusi: 
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    int golongan, anak;
    int gajiPokok, pajak, tambahan, total;

    cout << "Masukkan nama anda: ";
    getline(cin, nama);
    cout << "Masukan golongan (1, 2, 3): ";
    cin >> golongan;
    cout << "Jumlah anak: ";
    cin >> anak;

    switch (golongan) {
        case 1:
            gajiPokok = 5000000;
            break;
        case 2:
            gajiPokok = 3000000;
            break;
        case 3:
            gajiPokok = 2500000;
            break;
        default:
            cout << "Golongan tidak valid!" << endl;
            return 1;}

    pajak = 0.05 * gajiPokok;

    if (anak == 1 || anak == 2) 
        {tambahan = 500000 * anak;}
    else if (anak > 2)
        {tambahan = 750000;}
    else 
        {tambahan = 0;}

    total = gajiPokok - pajak + tambahan;
    cout << "Gaji total: Rp. " << total << endl;
    return 0;}