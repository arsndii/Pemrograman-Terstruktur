#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Ternary" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 4 November 2021" << endl << endl;

	int x;
	cout << "Masukkan Nilai x : ";
	cin >> x;
	cout << endl;
	
	x = (x<10) ? -x : x;
	
	cout << " | x | = " << x;
	
	return 0;
}
