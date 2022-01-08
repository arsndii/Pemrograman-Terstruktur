#include <iostream>
using namespace std;

void LuasPersegi(){
	cout << "Program    : Void" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int panjang, lebar;
	
	cout << "Masukkan panjang : "; cin >> panjang;
	cout << "Masukkan lebar   : "; cin >> lebar;
	
	cout << "Luas persegi     : " << panjang*lebar;
}

int main(){
	LuasPersegi();
	return 0;
}
