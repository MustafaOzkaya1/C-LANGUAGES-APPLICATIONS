#include <iostream>
using namespace std;
int main () {
	int n;
	int dizi [10] = {} ;
	int ntop;
	
	
	for(int i=0 ; i<10 ; i++) {
		
		
		cout<<i+1<<".sayi: "<<endl;
		cin>>dizi[i];
		n++;
		ntop+=dizi[i];
		
		
	}
cout<<"ortalama: "<<float (ntop)/n<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	

