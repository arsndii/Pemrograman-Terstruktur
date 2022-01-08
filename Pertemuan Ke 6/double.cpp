#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Double" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	float jari, hasil;
	const double p = 3.14;
	
	cout << "Masukkan jumlah jari-jari = ";
	cin >> jari;
	
	hasil = jari * (jari * p);
	cout << "Luas dari lingkaran 3.14 X " << jari << " X " << jari << " adalah " << hasil;
	
	return 0;
}
