//1 ile 100 aras�ndaki say�lardan tek ve �ift olanlar� ayr� ayr� toplat�p yazd�r�n�z
#include <iostream>
using namespace std;
int main () {
	int toplam;
	int n;
	for(int i=1;i<=100;i++) {
			

			if (i%2==0) {
				
			toplam=i+toplam;
			
			
			
		}
        else if (i%2==1) {
        	
        	n=n+i;
        				

		}
	
	}


	
		cout<<"cift sayi toplami: "<<toplam<<endl;
		cout<<"cift sayi toplami: "<<n;
	
	
	
	
	
	
	
	
	
	
	
	
	
 
	return 0;
}
