#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL,"Turkish");
	int sayi,yuzler,onlar,birler;
	
	cout<<"BÝR SAYI GÝRÝNÝZ: "<<endl;
	cin>>sayi;
	
	yuzler=sayi/100;
	sayi=sayi-(yuzler*100);
	onlar=sayi/10;
	sayi=sayi-(onlar*10);
	birler=sayi;
	
	cout<<"YÜZLER BASAMAÐI: "<<yuzler<<endl;
	cout<<"ONLAR BASAMAÐI: "<<onlar<<endl;
	cout<<"BÝRLER BASAMAÐI: "<<birler<<endl;

	
	
	
	
	
	
	
	
	
	
}
