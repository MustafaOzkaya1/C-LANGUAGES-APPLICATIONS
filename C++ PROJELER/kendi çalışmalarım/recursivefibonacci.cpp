//1 1 3 5 8 13...
#include <iostream>
using namespace std;
int adim;
int fibonacci (int adim) 

{
	if(adim==0) 
	{
	    cout<<"gecerli adim giriniz "<<endl;
	}
	else if (adim==1) 
	{
	  return adim;
	}
	else if (adim==2) 
	{
	   return 1; 
	}
	else {
	
	return fibonacci(adim-1)+fibonacci(adim-2);

	
}
}
int main () 


{
	cout<<"fibonacci dizizsýnin kacinci adimini istiyorsunuz ? "<<endl;
	cin>>adim;
	cout<<fibonacci(adim);
}
