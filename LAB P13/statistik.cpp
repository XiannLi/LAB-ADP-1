#include <iostream>
#include <vector>
using namespace std;

double total(const vector<double>& nilai) {
    double jumlah = 0.0;
    for (double n : nilai) {
        jumlah += n;
    }
    return jumlah;
}
double rataRata(const vector<double>& nilai) {
    return total(nilai) / nilai.size();
}
double nilaiTertinggi(const vector<double>& nilai) {
    double max = nilai[0];
    for (double n : nilai) {
        if (n > max) {
            max = n;
        }
    }
    return max;
}
double nilaiTerendah(const vector<double>& nilai) {
    double min = nilai[0];
    for (double n : nilai) {
        if (n < min) {
            min = n;
        }
    }
    return min;
}

int main() {
    int mahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> mahasiswa;

    vector<double> nilai(mahasiswa);
    for (int i = 0; i < mahasiswa; ++i) {
        cout << "Masukkan nilai untuk mahasiswa " << (i + 1) << ": ";
        cin >> nilai[i];
    }

    cout << "Total nilai: " << total(nilai) << endl;
    cout << "Rata-rata nilai: " << rataRata(nilai) << endl;
    cout << "Nilai tertinggi: " << nilaiTertinggi(nilai) << endl;
    cout << "Nilai terendah: " << nilaiTerendah(nilai) << endl;

    return 0;
}