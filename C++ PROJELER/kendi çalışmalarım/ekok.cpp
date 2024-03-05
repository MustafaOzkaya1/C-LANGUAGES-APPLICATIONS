//ekok bulma
//ebob bulma
#include <iostream>
using namespace std;
int main () {
	int sayi1;
	int sayi2;
	int ekok=0;
	int ebob=0;
	int enb=0;
	cout<<"1.sayiyi giriniz"<<endl;
	cin>>sayi1;
	cout<<"2.sayiyi giriniz"<<endl;
	cin>>sayi2;
	if(sayi1>sayi2) {
		enb=sayi1;
	}
	else
	enb=sayi2;
	for(int i=enb;i>0;i--) {
			if(sayi1%i==0 && sayi2%i==0) {
				ebob=i;
			break;
		}
		
	}
	cout<<"ebob: "<<ebob<<endl;
	ekok=(sayi1*sayi2)/ebob;
	cout<<"ekok: "<<ekok<<endl;

	
	
	
	
	
} 
