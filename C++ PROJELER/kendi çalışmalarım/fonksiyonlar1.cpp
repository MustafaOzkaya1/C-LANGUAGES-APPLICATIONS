#include <iostream>
using namespace std;

 void selamla() {
      cout<<"sa"<<endl;
      cout<<"as"<<endl;
 }
 
int factorial (int sayi) {
 	int faktoriyel=1;
 	for(int i=2 ; i<=sayi ; i++) {
	 
 	   faktoriyel*=i;
 	   
 }
 cout<<"faktoriyel: "<<faktoriyel<<endl;
 }

int main () {
	
	selamla();
	int a;
	cout<<"faktoriyeli alinacak sayiyi giriniz"<<endl;
	cin>>a;
	
	
    factorial (a);	
	
	
	
	
	
	
	
	
	
}
