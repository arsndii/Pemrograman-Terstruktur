#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Latihan Faktorial" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int bilangan, hasil=1;
	cin >> bilangan;
	
	for(int i=bilangan;i>=1;i--){
		hasil *= i;
	}
	cout << bilangan << "! = " << hasil;
}
