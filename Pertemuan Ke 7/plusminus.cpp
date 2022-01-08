#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Plus Minus" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 4 November 2021" << endl << endl;

	int x;
	float y;
	
	x = +7; // atau dapat ditulis dengan x =7
	y = -3.12; // memasukkan nilai negatif -3.12
	
	// Menampilkan nilai yang disimpan kedalam variabel x dan y
	cout << "Nilai x : " << x << endl;
	cout << "Nilai y : " << y << endl << endl;
	
	x = -x; // merubah nilai x menjadi negatif
	y = -y; // merubah nilai y menjadi positif
	
	// menampilkan kembali nilai variabel x dan y
	cout << "Nilai x yang baru : " << x << endl;
	cout << "Nilai y yang baru : " << y << endl << endl;

return 0;
}
