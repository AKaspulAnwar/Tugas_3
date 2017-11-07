#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int nilai;
	
	cout <<" Masukan nilai : ";
	cin >> nilai;
	
	if (nilai >0)
		cout <<" nilai positif";
	else if (nilai <0)
		cout <<" nilai negatif";
	else 
		cout <<" nilai 0";
}
