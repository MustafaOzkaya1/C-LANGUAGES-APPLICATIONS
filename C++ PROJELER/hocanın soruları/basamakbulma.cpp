#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL,"Turkish");
	int sayi,yuzler,onlar,birler;
	
	cout<<"B�R SAYI G�R�N�Z: "<<endl;
	cin>>sayi;
	
	yuzler=sayi/100;
	sayi=sayi-(yuzler*100);
	onlar=sayi/10;
	sayi=sayi-(onlar*10);
	birler=sayi;
	
	cout<<"Y�ZLER BASAMA�I: "<<yuzler<<endl;
	cout<<"ONLAR BASAMA�I: "<<onlar<<endl;
	cout<<"B�RLER BASAMA�I: "<<birler<<endl;

	
	
	
	
	
	
	
	
	
	
}
