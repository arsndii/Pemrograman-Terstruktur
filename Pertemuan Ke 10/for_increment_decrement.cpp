#include<iostream>
using namespace std;

int main(){
  cout << "Program    : For Increment Decrement" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  cout << "PENGULANGAN INCREMENT (NAIK SATU NILAI)" << endl;

  for(int a=0; a<10; a++){
    cout << a << endl;
  }
  cout << endl;
  cout << "PENGULANGAN DECREMENT (TURUN SATU NILAI)" << endl;
  for(int b=10; b>0 ;b--){
    cout << b << endl;
  }

  return 0;
}
