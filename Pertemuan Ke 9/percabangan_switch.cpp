#include<iostream>
using namespace std;

int main(){
  cout << "Program    : Percabangan Switch" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 10 Desember 2021" << endl << endl;

  char nilai = 'D';

  switch(nilai){
    case 'A':
      cout << "Luar Biasa" << endl;
      break;
    case 'B':
      cout << "Bagus" << endl;
      break;
    case 'C':
      cout << "Anda Lulus" << endl;
      break;
    case 'D':
      cout << "Mengikuti Remedi" << endl;
      break;
    case 'E':
      cout << "Anda Tidak Lulus" << endl;
      break;
    default:
      cout << "Tidak Ada Nilai" << endl; 
  }
  cout << "Karena nilai anda adalah " << nilai << endl;
  
  return 0;
}
