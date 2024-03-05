#include <iostream>
using namespace std;
int main () 
{
int x;
cout<<"array kac sayi icerecek ?"<<endl;
cin>>x;
int *p=new int[x];
for(int i=0;i<x;i++) 
{
cin>>p[i];	
}
for(int i=0;i<x;i++) 
{
cout<<i+1<<".sayi:"<<p[i]<<endl;	
}
delete[] p;

cout<<*p;




	
}
