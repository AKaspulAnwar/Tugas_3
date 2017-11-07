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
 }
