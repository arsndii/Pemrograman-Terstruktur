#include<iostream>
using namespace std;

int main(){
  cout << "Program    : If Dua Kondisi" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  int nilai = 90;

  if(nilai>80){
    cout << "Selamat Anda Lulus" << endl;
    cout << "Silahkan ke semester berikutnya";
  } else{
    cout << "Maaf Anda Tidak Lulus";
  }
  
  return 0;
}
