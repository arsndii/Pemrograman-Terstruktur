#include <cstring>
#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Stringstrlen" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 3 Oktober 2021" << endl << endl;

	char nama[10];
	int jumlah_karakter;
	cout <<"Masukkan sebuah kata = "; cin>>nama;
	jumlah_karakter = strlen(nama);
	cout <<"Kata " <<nama;
	cout <<" Memiliki " <<jumlah_karakter <<" Karakter";

}
