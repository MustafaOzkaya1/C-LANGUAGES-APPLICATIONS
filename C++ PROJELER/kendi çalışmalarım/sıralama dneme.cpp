#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () 
{
int dizi[10]={};
int bosluk;
srand(time(0));

for(int i=0;i<10;i++) 
{
	dizi[i]=rand()%101;
	
}
for (int j=0;j<10;j++)
{
for(int m=j+1;m<9;m++)
{
     if (dizi[j]>dizi[m])
	 {
	 bosluk=dizi[j];
	 dizi[j]=dizi[m];
	 dizi[m]=bosluk;	
	 }	
	 
}	
}
for(int a=0;a<10;a++) 
{
	cout<<dizi[a]<<" ";
	
}
}
