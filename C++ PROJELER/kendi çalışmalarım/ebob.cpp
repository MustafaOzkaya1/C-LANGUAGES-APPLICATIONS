//ebob bulma
#include <iostream>
using namespace std;
int main () {
	int sayi1;
	int sayi2;
	cout<<"1.sayiyi giriniz"<<endl;
	cin>>sayi1;
	cout<<"2.sayiyi giriniz"<<endl;
	cin>>sayi2;
	for(int i=1;i<1000;i++) {
			if(sayi1%i==0 && sayi2%i==0) {
			cout<<"ebob: "<<i<<endl;
		}
		
	}

	
	
	
	
	
} 
