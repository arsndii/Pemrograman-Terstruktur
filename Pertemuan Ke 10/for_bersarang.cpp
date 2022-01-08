#include<iostream>
using namespace std;

int main(){
  cout << "Program    : For Bersarang" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  for (int j=1; j<=10; j++){
    for (int k=1; k<=j; k++){
      cout << k*j << ' ';
    }
    cout << endl;
  }
  
  return 0;
}
