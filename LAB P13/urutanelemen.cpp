#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    vector<int> angka(n);
    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> angka[i];
    }

    cout << "Urutan elemen setelah dibalik:" << endl;
    for (int i = n - 1; i >= 0; --i) {
        cout << angka[i] << " ";
    }
    cout << endl;

    return 0;
}
