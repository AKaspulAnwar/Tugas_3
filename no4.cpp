#include <iostream>
#include <conio.h>

using namespace std;
int main (){
	int nilai;
	
	cout <<" Input nilai : ";
	cin >> nilai;
	
	if (nilai >0)
		cout <<" (+)positif";
	else if (nilai <0)
		cout <<" (-)negatif";
	else 
		cout <<" nilai 0";
}
