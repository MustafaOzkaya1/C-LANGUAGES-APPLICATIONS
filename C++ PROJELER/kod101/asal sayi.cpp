#include <iostream>
using namespace std;
int main () {
	int sayi;
	int sayac=0;
	cout<<"sayi giriniz" <<endl;
	cin>>sayi;
	
	for(int i=1;i<=sayi ;i++) {
	 	
		 if(sayi%i==0) {
		 	
		 	sayac++;
		 	
		 }
		
	
		
	}
	
	if (sayac<3) {
		cout<<"sayi asaldir "<<endl;
		
	}
	else 
		cout<<"sayý asal degildir";
	

	
	
	
	
	
	
}
