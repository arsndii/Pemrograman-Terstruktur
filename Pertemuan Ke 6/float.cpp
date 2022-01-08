#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Float" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	float jari, hasil;
	const float p = 3.14;
	
	cout << "Masukkan jumlah jari-jari = ";
	cin >> jari;
	
	hasil = (jari * p) * 2;
	cout << "Keliling dari lingkaran adalah " << hasil;
	
	return 0;
}
