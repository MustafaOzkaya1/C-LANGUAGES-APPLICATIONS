#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
 int boyut;
 cout<<"boyut giriniz: "<<endl;
 cin>>boyut;
 for(int i=0;i<boyut;i++)
 {
 for(int j=0;j<boyut;j++)
 {
 if(i==j || i+j>boyut+1)
 {
 cout<<"X";	
 }	
 else 
 cout<<" ";
 }	
 cout<<endl;
 }
}
