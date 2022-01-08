#include <iostream>
using namespace std;

int LuasPersegi(int p, int l){
	int luas;
	luas = p*l;
	return luas;
}

int main(){
	cout << "Program    : Return" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int a,b;
	
	cout << "Masukkan panjang : "; cin >> a;
	cout << "Masukkan lebar   : "; cin >> b;
	
	cout << "Luas persegi     : " << LuasPersegi(a,b);
	return 0;
}
