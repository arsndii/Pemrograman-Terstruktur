#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Pengisian Array" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int A [5];
	
	for (int C=0; C<5; C++){
		cout << "A[" << C << "] = "; cin >> A[C];
	}
	return 0;
}
