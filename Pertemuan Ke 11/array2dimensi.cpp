#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Array 2 Dimensi" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

	int a[5][2] = {{10,2},{30,3},{30,4},{40,5},{50,6}};
	
	for(int i=0; i<5; i++){
		for(int j=0; j<2; j++){
			cout << "a[" << i << "][" << j <<"] = " << a[i][j] << endl;
		}
	}
	
	return 0;
}
