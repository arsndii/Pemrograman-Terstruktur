#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Bitwise" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 4 November 2021" << endl << endl;

	int a = 60, b = 13;
	
	cout << "a&b  = " << (a&b) << endl;
	cout << "a|b  = " << (a|b) << endl;
	cout << "a^b  = " << (a^b) << endl;
	cout << "~a   = " << (~a) << endl;
	cout << "a<<2 = " << (a<<2) << endl;
	cout << "a>>2 = " << (a>>2) << endl;
	
	return 0;
}
