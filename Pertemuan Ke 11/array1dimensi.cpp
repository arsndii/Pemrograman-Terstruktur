#include <iostream>
using namespace std;

int umur[] = {18, 19, 20, 21, 22};
int n, hasil=0;

int main(){
	cout << "Program    : Array 1 Dimensi" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	for(n=0; n<5; ++n){
		hasil += umur[n];
	}
	cout << hasil;
	
	return 0;
}
