#include <iostream>
using namespace std;
int main () 
{
	int bosluk;
int dizi[10]={1,3,4,5,2,8,2,3,21};
for(int i=0;i<9;i++){
	for(int j=i+1;j<10;j++){
		if (dizi[i]>dizi[j]){
		bosluk=dizi[i];
	    dizi[i]=dizi[j];
		dizi[j]=bosluk;
		}
	}
}
		for (int i = 0; i<10;i++ ) {
		
		cout << dizi[i] << " ";
		
	}	
}

