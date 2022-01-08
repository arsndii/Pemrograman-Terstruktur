#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Latihan Table Perkalian" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			cout << j << " x " << i << " = " << j*i << "|";
		}
		cout << endl;
	}
}
