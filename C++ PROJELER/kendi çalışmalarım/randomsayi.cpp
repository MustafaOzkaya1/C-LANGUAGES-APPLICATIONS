#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () 
{
int toplam;
int dizi[10]={};
srand(time(0));
for(int i=0;i<10;i++)
{
	dizi[i]=rand()%101;
}
for(int j=0;j<10;j++)
{
	cout<<dizi[j]<<" ";
	toplam=toplam+dizi[j];
}
cout<<"toplam: "<<toplam;
	
}
