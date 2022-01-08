#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Latihan Array" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int nilai[5] = {20,50,60,10,100};
	nilai[0] = 65;
	
	// out <<nilai[1];
	for(int i=0; i<5; i++){
		cout << nilai[i] << endl;
	}
}
