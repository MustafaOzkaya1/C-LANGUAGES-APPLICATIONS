#include <iostream>
using namespace std;
int faktoriyel (int sayi) 
{
	if (sayi==1) 
	{
	return sayi; 
	}
	return faktoriyel(sayi-1)*sayi;
}

int main () {
	
	
	cout<<faktoriyel(5);
	
	
	
	
}
