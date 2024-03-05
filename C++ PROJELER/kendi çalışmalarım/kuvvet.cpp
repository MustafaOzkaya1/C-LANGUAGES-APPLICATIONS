#include <iostream>
using namespace std;
int main () {
	int sayi=0;
	int binler,onlar,yuzler,birler;
	cout<<"sayi giriniz: "<<endl;
	cin>>sayi;
	binler=sayi/1000;
	sayi=sayi-(binler*1000);
	yuzler=(sayi/100);
	sayi=sayi-(yuzler*100);
	onlar=sayi/10;
	sayi=sayi-(onlar*10);
	birler=sayi;
	
	cout<<"birler : "<<birler<<endl;
	cout<<"onlar : "<< onlar<<endl;
	cout<<"yuzler : "<< yuzler<<endl;
	cout<<"binler : "<<binler<<endl;

	
	
}
