#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	int dizi[20];
	int sayac=0;
	srand(time(0)*137137);
	
	for(int i=0;i<20;i++) {
	dizi[i]=rand()%99+1;
		for(int j=1;j<101;j++) {
			if(dizi[i]%j==0) {
				sayac++;
			}
			
		}
		
	
	}
	for(int i=0;i<20;i++) {
	
		if(sayac==2) {
			cout<<"asal olan:"<<dizi[i]<<endl;
		}
		else 
		cout<<"asal olmayan"<<dizi[i]<<endl;
	
}
}
