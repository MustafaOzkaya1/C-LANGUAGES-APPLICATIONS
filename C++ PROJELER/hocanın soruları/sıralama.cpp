// 0 ile 100 aras�nda rasgele say�lardan olusan 10 eleemanl� diziyi kucukten buyuge s�ralat�n�z
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	srand(time(0));
	int dizi [10];
	int t=0;
	int bosluk;
	
	for (int i=0;i<10 ;i++) {
		dizi[i] = rand()%11; //%101 s�n�r olusturur 100 e kadar & %101+100 100'den 200'e kadar
		cout << dizi[i] <<" ";
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
cout<<"en kucuk: "<<dizi[0];

	
	
	
	
	
	
	
	
}
