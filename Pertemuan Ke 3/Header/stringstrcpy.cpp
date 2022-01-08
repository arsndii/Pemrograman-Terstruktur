#include <cstring>
#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Stringstrcpy" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 3 Oktober 2021" << endl << endl;

	char negara[20];
	strcpy(negara, "Indonesia");
	cout <<"Saya Warga Negara " <<negara;
}
