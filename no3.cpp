#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main(){
	int gape,jake,lembur,gatot,pajak ;
	
	cout << " Input gaji pegawai : ";
	cin >> gape;
	cout << " Input jam kerja : ";
	cin >> jake;
	
	lembur = jake - 40;
	gatot = (lembur*1.5+40)+gape;
	pajak = gatot*0.15;
	gatot = gatot-pajak;
	
	cout << " Lemburan : "<< lembur << endl ;
	cout << " Potongan pajak 15% : "<< pajak << endl;
	cout << " Gaji bersih pegawai : "<< gatot << endl;
}
