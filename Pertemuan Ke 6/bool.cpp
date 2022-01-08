#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Bool" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	int angka;
	bool hasil = true;
	
	cout << "Masukkan angka = ";
	cin >> angka;
	
	hasil = angka > 10;
	
	cout << hasil;
	
	return 0;
}
