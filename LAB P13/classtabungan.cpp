#include <iostream>
using namespace std;
class Tabungan {
private:
    double saldo;
public:
    Tabungan() : saldo(0.0) {}
    void setor(double jumlah) {
        if (jumlah > 0) {
            saldo += jumlah;
            cout << "Anda telah menyetor: " << jumlah << endl;
        } else {
            cout << "Jumlah setoran harus positif." << endl;
        }
    }
    void tarik(double jumlah) {
        if (jumlah > 0) {
            if (jumlah <= saldo) {
                saldo -= jumlah;
                cout << "Anda telah menarik: " << jumlah << endl;
            } else {
                cout << "Saldo tidak mencukupi." << endl;
            }
        } else {
            cout << "Jumlah penarikan harus positif." << endl;
        }
    }
    void cekSaldo() const {
        cout << "Saldo Anda: " << saldo << endl;
    }
};
int main() {
    Tabungan tabungan;
    int pilihan;
    double jumlah;

    do {
        cout << "Menu:" << endl;
        cout << "1. Setor" << endl;
        cout << "2. Tarik" << endl;
        cout << "3. Cek Saldo" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah yang ingin disetor: ";
                cin >> jumlah;
                tabungan.setor(jumlah);
                break;
            case 2:
                cout << "Masukkan jumlah yang ingin ditarik: ";
                cin >> jumlah;
                tabungan.tarik(jumlah);
                break;
            case 3:
                tabungan.cekSaldo();
                break;
            case 4:
                cout << "Terima kasih telah menggunakan layanan kami!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);

    return 0;
}