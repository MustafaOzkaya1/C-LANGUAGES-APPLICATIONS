
#include <iostream>

using namespace std;
int main () {
	int dizi [10];
	int bosluk;
	
	for (int i=0;i<10 ;i++) {
	cout<<i+1<<".elemani giriniz"<<endl;
	cin>>dizi[i];
	}
	cout<<endl;
	
	for (int i=0 ; i<9 ;i++) {
    for (int j=i +1 ; j<10 ;j++) {
	
		
		if (dizi[i]>dizi[j]) {
		
		bosluk=dizi[i];
	    dizi[i]=dizi[j];
		dizi[j]=bosluk;
	}
	}
	}
	
			for (int i = 0; i<10;i++ ) {
		
		cout << dizi[i] << " ";
		
	}	


	cout<<"en kucuk eleman "<<dizi[0]<<endl;
		cout<<"en buyuk eleman "<<dizi[9]<<endl;

	
	
	
	
	
	
	
}
