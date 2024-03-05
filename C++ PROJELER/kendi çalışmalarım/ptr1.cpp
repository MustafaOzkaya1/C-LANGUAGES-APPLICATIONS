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
	cout<<"degiskenin adresi: "<<a<<endl; //bilgisayarda her bilginin bir yeri olduðu gibi deðiþkenlerinde bir yeri vardý ve bu yeri bulmak için bu kod veya altýndaki kod kullanýlýr.
	cout<<"degiskenin adresi: "<<ptr<<endl;
	cout<<"degiskenin degeri: "<<*ptr<<endl;
}
