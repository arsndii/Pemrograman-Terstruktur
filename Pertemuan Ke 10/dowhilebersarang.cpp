#include<iostream>
using namespace std;

int main(){
  cout << "Program    : Do While Bersarang" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  int j = 10;
  int k;

  do{
    k = 1;
    while (k<=j){
      cout << k*j << ' ';
      k++;
    }
    cout << endl;
    j--;
  } while(j>=1);

  return 0;
}
