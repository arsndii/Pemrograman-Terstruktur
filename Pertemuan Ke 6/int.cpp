#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Int" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	int bilangan = 0, hasil = 0;
	
	cout << "Masukkan angka = ";
	cin >> bilangan;
	
	hasil = bilangan * 2;	
	cout << "Hasil dari " << bilangan << " X 2 adalah " << hasil;
	
	return 0;
}
