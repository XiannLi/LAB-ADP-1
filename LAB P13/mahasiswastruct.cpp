#include <iostream>
using namespace std;

struct biodata {
	string nama;
	string nim;
	float nilai;
};

int main()
{
	int len = 3;
	biodata mahasiswa[len];
	
	for (int i = 0; i < len; ++i) {
		cout << "nama mhs.: ";
		cin >> mahasiswa[i].nama;
		
		cout << "nim mhs.: ";
		cin >> mahasiswa[i].nim;
		
		cout << "nilai mhs.: ";
		cin >> mahasiswa[i].nilai;
		
		cout << endl;
	}
	
	float top = mahasiswa[0].nilai;
	for (int i = 1; i < len; ++i) {
		if (top < mahasiswa[i].nilai) top = mahasiswa[i].nilai;
	}
	cout << "top=" << top << endl;
	
	return 0;
}