#include <iostream>
 using namespace std;
 
 int main (){
 	float berat;
 	int tinggi;
 	
 	cout <<" input tinggi badan (cm): ";
 	cin >> tinggi;
 	
 	cout <<" input berat badan (kg) : ";
 	cin >> berat;
 	
 	if (berat<tinggi/2.5) {
 		cout <<" Hasil : Kurus: tambah lagi beratnya "<< endl;
	 }
	 
	else if (tinggi/2.5 <= berat && berat <= tinggi/2.3) {
		cout <<" Hasil : Normal: ideal, pertahankan "<< endl;
	}
	
	else if (tinggi/2.3 < berat) {
		cout <<" Hasil : Berat: banyaki olahraga,kurangi porsi makanan "<< endl;
	}
 }
