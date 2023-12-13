#include <iostream>
#include <math.h>

using namespace std;


int main()
{
	int a,b,c;
	cout << "Birinci dik kenari giriniz: ";
	cin >> a;
	cout << "Ikinci dik kenari giriniz: ";
	cin >> b;
	c = sqrt(a*a+b*b);
	cout << "Hipotenus: " << c << endl;
	
	cout << "Ucgenin cevresi: "<< a+b+c << endl;
	
	cout << "Ucgenin alani: " << (float)a*b/2 << endl;
	
	return 0; 

}