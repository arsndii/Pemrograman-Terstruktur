#include<iostream>
using namespace std;

int x;

// Kita membuat dua buah fungsi utama yaitu fungsi test() dan fungsi main()
// Fungsi test()
void test(){
	x = 20;
	cout << "Nilai x didalam fungsi test() adalah : " << x << endl;
}

// Fungsi main()
int main(){	
	cout << "Program    : Variabel Global" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	x = 10;
	cout << "Nilai x didalam fungsi test() adalah : " << x << endl;
	
	//Memanggil fungsi test()
	test();
	
	return 0;
}
