#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main(){
	char datar;
	double L,p,l,a,t;
	
	cout << "Pilih  bangun datar (p/s) : ";
	cin >> datar;
	
	if (datar == 'P' || datar == 'p'){
		cout << " Menghitung luas persegi panjang \n";
		cout << " Masukan panjangnya : ";
		cin >> p;
		
		cout << " Masukan lebarnya : ";
		cin >> l;
		L = p*l;
		cout << " Luas persegi panjang : "<< L << endl;
	}
	else if (datar == 'S' || datar =='s'){
		cout << " Menghitung luas segitiga \n";
		cout << " Masukan alasnya : ";
		cin >> a;
		
		cout << " Masukan tingginya : ";
		cin >> t;
		L = 0.5 *a*t;
		cout << " Luas segitiga : "<< L << endl;
	}
	else {
		cout << " Sorry, wrong entered \a"<< endl;
	}
}
