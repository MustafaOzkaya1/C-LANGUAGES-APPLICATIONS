#include <iostream>
using namespace std;
int main () {
	
	setlocale(LC_ALL,"Turkish");
	int sayi;
	int sayac;
	
	cout<<"SAYI G�R�N�Z: "<<endl;
	cin>>sayi;
	
	for(int i=2 ; i<2  ;i++) {
		
		if(sayi % i==0) {
		
		sayac++;
	}
	}
	if (sayac==0) {
		
		cout<<"SAYI ASALDIR"<<endl;
		
	}
	else {
		cout <<"SAYI ASAL DE��LD�R "<<endl;
	}
	
	
}
