#include <iostream>
using namespace std;

int a,b,k,z,c,d,e;

void awalan();
void awalan(){
	cout << "Masukkan nilai pertama = ";cin >> a;
	cout << "Masukkan nilai kedua   = ";cin >> b;
}

void pemprog();
void pemprog (){
	cout << "Program    : Latihan Function" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;
}

void penjumlahan();
void penjumlahan(){
	awalan();
	z = a+b;
	cout << "Hasil dari penjumlahan = " << z << endl;
}

void pengurangan();
void pengurangan(){
	awalan();
	z = a-b;
	cout << "Hasil dari pengurangan = " << z << endl;
}

void perkalian();
void perkalian(){
	awalan();
	z = a*b;
	cout << "Hasil dari perkalian   = " << z << endl;
}

void pembagian();
void pembagian(){
	awalan();
	z = a/b;
	cout << "Hasil dari pembagian   = " << z << endl;
}

void keluar();
void keluar(){
	cout << "Terima Kasih" << endl;
}

main(){
	pemprog();
	cout << "MENU UTAMA" << endl << endl;
	cout << "1. Operasi Penjumlahan" << endl;
	cout << "2. Operasi Pengurangan" << endl;
	cout << "3. Operasi Perkalian" << endl;
	cout << "4. Operasi Pembagian" << endl;
	cout << "5. Keluar" << endl;
	cout << "Masukkan Kode [1,2,3,4,5] = "; cin >> k;
	
	switch(k){
		case 1:
			penjumlahan();
			break;
		case 2:
			pengurangan();
			break;
		case 3:
			perkalian();
			break;
		case 4:
			pembagian();
			break;
		case 5:
			keluar();
			break;
		default:
			cout << "Pilihan cuma ada 5";
			break;
	}
	
	return 0;
}
