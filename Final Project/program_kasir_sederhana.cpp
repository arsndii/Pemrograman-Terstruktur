#include <iostream>
#include <windows.h>
using namespace std;

char menu_utama, loop;
string password;
int menu, kodeBarang, quantity, total, totalBelanja, row, diskon, setelahDiskon;
const string namaBarang[5] = {"AQUA 600ml","Susu ULTRA MILK","Bimoli Minyak Goreng","TEH KOTAK 200ml","Indomie Soto 70g"};
const int hargaBarang[5] = {4400,6200,38700,3500,2800};
int stockBarang[5] = {100,100,100,100,100};

void gotoxy(short int x,short int y){
 COORD k = {x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

void header(){
	cout << " +-------------------------------------------------------------------+" << endl;
	cout << " |                           PROGRAM KASIR                           |" << endl;
	cout << " |                                                                   |" << endl;
	cout << " |                   M. Yedi Arisandi - 2010010210                   |" << endl;
	cout << " +-------------------------------------------------------------------+" << endl << endl;
}

main(){
	login:
	header();
	cout << "                       +-------------------------+" << endl;
	cout << "                       |          Login          |" << endl;
	cout << "                       +-------------------------+" << endl;
	cout << "                        Password = "; cin >> password;
	
	if(password != "admin"){
		system("cls");
		cout << "                       +-------------------------+" << endl;
		cout << "                       |       Login Gagal       |" << endl;
		cout << "                       +-------------------------+" << endl;
		system("pause");
		system("cls");
		goto login;
	}
	
	start:
	system("cls");
	header();
	cout << " +-------------------------------------------------------------------+" << endl;
	cout << " |                            MENU  UTAMA                            |" << endl;
	cout << " +-------------------------------------------------------------------+" << endl;
	cout << " | [A] Penjualan                                                     |" << endl;
	cout << " | [B] Daftar Barang                                                 |" << endl;
	cout << " | [C] Keluar                                                        |" << endl;
	cout << " +-------------------------------------------------------------------+" << endl;
	cout << "   Pilih Menu [A/B/C] = "; cin >> menu_utama;
	
	// Menu Penjualan
	if(menu_utama == 'A' || menu_utama == 'a'){
		penjualan:
		system("cls");
		header();
		cout << " +------+---------------------------+-------+----------+-------------+" << endl;
		cout << " | Kode |        Nama Barang        | Harga | Quantity |    Total    |" << endl;
		cout << " +------+---------------------------+-------+----------+-------------+" << endl;
		
		row = 9;
		do{
			gotoxy(1,row); cout << "|  "; cin >> kodeBarang;
			gotoxy(8,row); cout << "| " << namaBarang[kodeBarang];
			gotoxy(36,row); cout << "| " << hargaBarang[kodeBarang];
			gotoxy(44,row); cout << "| "; cin >> quantity;
			
		    // Hitung Total
		    total = hargaBarang[kodeBarang] * quantity;
		    totalBelanja = totalBelanja + total;
			gotoxy(55,row); cout << "| " << total;
			
			// Update stock barang
			stockBarang[kodeBarang] = stockBarang[kodeBarang] - quantity;
			
			// Looping
			gotoxy(69,row); cout << "| " << "Input Lagi [y/n] = "; cin >> loop;
			row++;
		} while(loop == 'Y' || loop == 'y');
		
		// Diskon
		if(totalBelanja > 100000){
			diskon = totalBelanja * 0.1; // Diskon 10%
			setelahDiskon = totalBelanja - diskon;
		} else {
			setelahDiskon = totalBelanja;
		}
		
		// footer
		if(loop != 'y'){
			cout << " +------+---------------------------+-------+----------+-------------+" << endl;
			cout << " | Total                                               | Rp          |"; gotoxy(60,++row); cout << totalBelanja << endl;
			cout << " | Diskon                                              | Rp          |"; gotoxy(60,++row); cout << diskon << endl;
			cout << " | Setelah Diskon                                      | Rp          |"; gotoxy(60,++row); cout << setelahDiskon << endl;
			cout << " +-----------------------------------------------------+-------------+" << endl << endl;
			
			// Menu
			cout << " +-------------------------------------------------------------------+" << endl;
			cout << " | [1] Kembali ke Menu Utama                                         |" << endl;
			cout << " | [2] Input Lagi                                                    |" << endl;
			cout << " | [3] Keluar                                                        |" << endl;
			cout << " +-------------------------------------------------------------------+" << endl;
			cout << "   Pilih Menu [1/2/3] = "; cin >> menu;
			switch(menu){
				case 1:
					system("cls");
					goto start;
					break;
				case 2:
					goto penjualan;
					break;
				case 3:
					system("exit");
					break;
				default:
					cout << "Perintah tidak ditemukan!";
			}
		}
	}
	
	// Menu Daftar Barang
	else if(menu_utama == 'B' || menu_utama == 'b'){
		system("cls");
		header();
		cout << " +------+--------------------------+------------------+--------------+" << endl;
		cout << " | Kode |       Nama Barang        |   Harga Barang   |  Sisa Stock  |" << endl;
		cout << " +------+--------------------------+------------------+--------------+" << endl;
		
		row = 9;
		for(int n=0; n<5;){
			gotoxy(1,row); cout << "|  " << n;
			gotoxy(8,row); cout << "| " << namaBarang[n];
			gotoxy(35,row); cout << "| Rp. " << hargaBarang[n];
			gotoxy(54,row); cout << "|     " << stockBarang[n];
			gotoxy(69,row); cout << "|" << endl;
			n++;
			row++;
		}
		cout << " +------+--------------------------+------------------+--------------+" << endl << endl;
		
		cout << " +-------------------------------------------------------------------+" << endl;
		cout << " | [1] Kembali ke Menu Utama                                         |" << endl;
		cout << " | [2] Keluar                                                        |" << endl;
		cout << " +-------------------------------------------------------------------+" << endl;
		cout << "   Pilih Menu [1/2] = "; cin >> menu;
		switch(menu){
			case 1:
				system("cls");
				goto start;
				break;
			case 2:
				system("exit");
				break;
			default:
				cout << "Perintah tidak ditemukan!";
		}
	}
	
	// Menu Keluar
	else if(menu_utama == 'C' || menu_utama == 'c'){
		system("exit");
	}
	
	return 0;
}
