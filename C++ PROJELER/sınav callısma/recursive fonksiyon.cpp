#include <iostream>
using namespace std;
int faktoriyel (int x) 
{
	if (x<0) 
	{
		cout<<"- li sayinin faktoriyelimi olur aq"<<endl;
	}
	else if (x==1) 
	{
		return 1;
	}
	else
	return faktoriyel(x-1) *x;
}
int main () 
{
	int x;
	cin>>x;
	cout<<"faktoriyel sonuc: "<<faktoriyel(x)<<endl;
	
}

