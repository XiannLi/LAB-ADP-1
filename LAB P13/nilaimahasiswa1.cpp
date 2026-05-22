#include <iostream>
#include <vector>
using namespace std;

int main() {
    int mahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> mahasiswa;

    vector<double> nilai(mahasiswa);
    double jumlah = 0.0;
    for (int i = 0; i < mahasiswa; ++i) {
        cout << "Masukkan nilai untuk mahasiswa: " << (i + 1) << ": ";
        cin >> nilai[i];
        jumlah += nilai[i];
    }

    double rata2 = jumlah / mahasiswa;
    cout << "Average grade: " << rata2   << endl;

    cout << "Nilai diatas rata-rata:" << endl;
    for (int i = 0; i < mahasiswa; ++i) {
        if (nilai[i] > rata2) {
            cout << "Mahasiswa " << (i + 1) << ": " << nilai[i] << endl;
        }
    }

    return 0;
}