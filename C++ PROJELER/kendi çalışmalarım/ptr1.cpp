#include <iostream>
using namespace std;
int main () 
{
int a=32;

int *ptr;

cout<<ptr<<endl;
cout<<a<<endl;
cout<<&a<<endl;
ptr=&a;	
	cout<<"degiskenin adresi: "<<a<<endl; //bilgisayarda her bilginin bir yeri oldu�u gibi de�i�kenlerinde bir yeri vard� ve bu yeri bulmak i�in bu kod veya alt�ndaki kod kullan�l�r.
	cout<<"degiskenin adresi: "<<ptr<<endl;
	cout<<"degiskenin degeri: "<<*ptr<<endl;
}
