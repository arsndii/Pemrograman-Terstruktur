#include<iostream>
using namespace std;

int main(){
  cout << "Program    : If Tiga Kondisi" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  int nilai = 90;
  // A = 80 - 100
  // B = 60 - 79
  // C = 40 - 59
  // D = 0 - 39

  if(nilai>80){
    cout << "A";
  } else if(nilai>=60){
    cout << "B";
  } else if(nilai>=40){
    cout << "C";
  } else{
    cout << "D";
  }
  
  return 0;
}
