#include <iostream>
 using namespace std;
 
 int main (){
 	float berat;
 	int tinggi;
 	
 	cout <<" Masukan tinggi badan dalam cm : ";
 	cin >> tinggi;
 	
 	cout <<" Masukan berat badan dalam kg : ";
 	cin >> berat;
 	
 	if (berat<tinggi/2.5) {
 		cout <<" Hasil : Kurus "<< endl;
	 }
	 
	else if (tinggi/2.5 <= berat <= tinggi/2.3) {
		cout <<" Hasil : Normal "<< endl;
	}
	
 }
