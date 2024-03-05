//fibonacci dizisi 1 1 2 3 5 8...
#include <iostream>
using namespace std;
int fibonacci (int adim) 
{
if (adim==0) 
{
return 0;
}	
if (adim<0) 
{
return 0;
}
if (adim==1) 
{
return 1;
}
if (adim==2) 
{
return 1;	
}
return fibonacci(adim-1)+fibonacci(adim-2);
}

int main () 
{
	for(int i=0;i<10;i++) 
	{
	int adim;
   cout<<"fibonacci sayisinin kacinciadimini ogrenmek istersin? "<<endl;
   cin>>adim;
   cout<<"fibonacci: "<<fibonacci(adim)<<endl;
    }
}
