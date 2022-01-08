#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Latihan Bilangan Ganjil Genap" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int bilangan;
	cin >> bilangan;
	if(bilangan%2==0){
		cout << "Genap";
	} else {
		cout << "Ganjil";
	}
}
