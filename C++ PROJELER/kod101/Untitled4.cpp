#include <iostream>
using namespace std;
int main () {
	float dizi[10];
	float ortalama;
	float toplam;
	
	
	for(int i=0 ; i<10;  i++) {
		cout<<i+1<<".sayiyi giriniz: ";
		cin>>dizi[i];
		toplam+=dizi[i];
	
	}
	cout<<"sonuc: "<<toplam<<endl;
	cout<<"ortalama: "<<toplam/10;
	
	
	
	
	
	
}
