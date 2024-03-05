#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () 
{
	srand(time(0));
	int dizi[10];
	int t=0;
	int bosluk;
	int x;
	int enkucuk;
	
	
		for (int i=0;i<10 ;i++) {
		dizi[i] = rand()%11; 
		cout << dizi[i] <<" ";
		
	}
	for (int i=0 ; i<9 ;i++) {
		
    for (int j=i +1 ; j<10 ;j++) {
	
		
		if (dizi[j]<dizi[i]) {
	
		bosluk=dizi[i];
	    dizi[i]=dizi[j];
		dizi[j]=bosluk;
	
	          
	}

	}	


		
}
    enkucuk=dizi[0];
	cout<<x;
}
