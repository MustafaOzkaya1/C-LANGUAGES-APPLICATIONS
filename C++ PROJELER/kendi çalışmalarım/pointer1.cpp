#include <iostream>
using namespace std;
int main () {
	
	int a=5;
	
	int *ptr;
	ptr = &a; //a nýn adres deðerini atýyoruz
	cout<<"degiskenin adresi: "<<&a<<endl; //bilgisayarda her bilginin bir yeri olduðu gibi deðiþkenlerinde bir yeri vardý ve bu yeri bulmak için bu kod veya altýndaki kod kullanýlýr.
	cout<<"degiskenin adresi: "<<ptr<<endl;
	cout<<"degiskenin degeri: "<<*ptr<<endl;
	
	*ptr=6; //a ya yeni bir deðer tanýmladýk.
	cout<<"degiskenin yeni degeri: "<<*ptr<<endl;
	
	
}
