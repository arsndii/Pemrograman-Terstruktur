#include<iostream>
using namespace std;



// Kita membuat dua buah fungsi utama yaitu fungsi test() dan fungsi main()
// Fungsi test()
void test(){
	int x; // Variabel x hanya dikenal oleh fungsi test()
	
	x = 20;
	cout << "Nilai x didalam fungsi test() adalah : " << x << endl;
}

// Fungsi main()
int main(){	
	cout << "Program    : Variabel Lokal" << endl;
	cout << "Nama       : M. Yedi Arisandi" << endl;
	cout << "NPM        : 2010010210" << endl;
	cout << "Kelas      : 3A Reg BJB" << endl;
	cout << "Dibuat Tgl : 21 Oktober 2021" << endl << endl;

	// x tidak dapat digunakan di fungsi main()
	
	//Memanggil fungsi test()
	test();
	
	return 0;
}
