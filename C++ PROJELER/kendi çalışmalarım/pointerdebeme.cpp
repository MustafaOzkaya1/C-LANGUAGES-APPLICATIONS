#include <iostream>
using namespace std;
int fonk (int x) 
{
return	x=35;
}


int main () 
{
	
	int *ptr;
	int x;
	x=21;
    ptr=&x;
	cout<<*ptr<<endl;
	
	cout<<fonk(x)<<endl;
	
	
}
