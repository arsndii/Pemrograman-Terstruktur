#include<iostream>
using namespace std;

int main(){
	cout << "Program    : Logika" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 4 November 2021" << endl << endl;

	bool a, b;
	a = (7==5);
	b = (5>4);
	
	bool x, y, z;
	x = a && b;
	y = a || b;
	z = !(a&&b);
	
	cout << x << y << z << endl;
	
	return 0;
}
