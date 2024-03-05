#include <iostream>
using namespace std;
int main ()
{
 int a []={1,2,3,4};
 int b []={5,6,7,8};
 for(int i=0;i<3;i++) 
 {
 	a[i]=b[i];
 }
	for(int j=3;j>0;j++) 
	{
		cout<<j<<".eleman: "<<b[j]<<endl;
	}
	
	
	
	
	
}
