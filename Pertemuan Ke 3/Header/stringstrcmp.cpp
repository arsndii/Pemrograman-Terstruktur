#include <cstring>
#include <iostream>
using namespace std;

int main(){
	cout << "Program    : Stringstrcmp" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 3 Oktober 2021" << endl << endl;

	char string1[10]; char string2[20]; int hasil;
	cout <<"Masukkan kata pertama = "; cin>>string1;
	cout <<"Masukkan kata kedua = "; cin>>string2;
	
	hasil = strcmp(string1,string2);
	
	if(hasil == 0){
		cout<<"Kata pertama dan kedua sama";
	} else{
		cout<< "Kata pertama dan kedua berbeda";
	}
}
