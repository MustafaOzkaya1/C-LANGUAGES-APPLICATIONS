#include <iostream>
using namespace std;

int toplama (int a,int b,int c ) {
		cout<<"sonuc: "<<a;
	return a+b+c; //fonksiyonu döndürmek
	
	
}


int main() {
	
	int sayi1,sayi2,sayi3;
	cout<<"1. sayiyi giriniz"<<endl;
	cin>>sayi1;
		cout<<"2. sayiyi giriniz"<<endl;
	cin>>sayi2;
	    cout<<"3. sayiyi giriniz"<<endl;
    cin>>sayi3;
	
	int a=toplama(sayi1,sayi2,sayi3);
		cout<<"sonuc: "<<a;

	
	
	
	
	
	
}
