#include<iostream>
using namespace std;

int main(){
  cout << "Program    : While Bersarang" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  int j = 10;
  int k;

  while(j>=1){
    k = 1;
    while (k<=j){
      cout << k*j << ' ';
      k++;
    }
    cout << endl;
    j--;
  }

  return 0;
}
