//fibonacci dizisini yaz 1 1 2 3 5 8 ....
#include <iostream>
using namespace std;
int fibonacci (int adim) 
{
 if (adim<0) 
 {
 	cout<<"gecerli bir adim sayisi giriniz"<<endl;
 	return 0;
 }
 else if (adim==1)
 {
 	return 1;
 }
  else if (adim==2)
 {
 	return 1;
 }
  else 
 return fibonacci(adim-1)+fibonacci(adim-2) ;
 	
 
}
int main () 

{
	int x;
	cout<<"fibonacci nin kacinci adimini istersiniz: "<<endl;
	cin>>x;
	cout<<"sonuc: "<<fibonacci(x)<<endl;
}
