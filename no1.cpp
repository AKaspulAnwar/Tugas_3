#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
int main() {
	int w, x, y ;
	cout << "Masukan nilai x = ";
	cin >> x;
	
	cout << "Masukan nilai y = ";
	cin >> y;
	
	if (x > y){
		w = x - y ;
		cout << "X-Y = ";
		cout << abs (w) << endl;
		cout << "Positif";
	}
}
