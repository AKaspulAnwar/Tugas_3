#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main(){
	int gape,jake,lembur,gatot,pajak ;
	
	cout << " Masukan gaji pegawai : ";
	cin >> gape;
	cout << " Masukan jam kerja : ";
	cin >> jake;
	
	lembur = jake - 40;
	gatot = (lembur*1.5+40)+gape;
	pajak = gatot*0.15;
	gatot = gatot-pajak;
	
	cout << " Gaji bersih pegawai : "<< gatot << endl;
}
