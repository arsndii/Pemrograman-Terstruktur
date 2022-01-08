#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Constanta" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	const int PANJANG = 10;
	const int LEBAR = 20;
	int luas = PANJANG * LEBAR;
	cout << luas;
	
	return 0;
}
