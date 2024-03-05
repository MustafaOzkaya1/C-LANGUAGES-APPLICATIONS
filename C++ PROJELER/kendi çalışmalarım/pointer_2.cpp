#include <iostream>
using namespace std;
void degerdegistir (int *ptr) {
	*ptr=20;
	cout<<"fonksiyon icindeki deger"<<endl;
	
	
	
	
}


int main () {
	int  a = 10;
	cout<<"a degiskenin deger: "<<a<<endl;
	degerdegistir (&a);
	cout<<"a degiskeninin yeni degeri: "<<a<<endl;
	
	
	
	
	return 0;
	
	
	
	
	
}
