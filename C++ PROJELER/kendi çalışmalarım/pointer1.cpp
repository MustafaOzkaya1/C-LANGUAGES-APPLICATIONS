#include <iostream>
using namespace std;
int main () {
	
	int a=5;
	
	int *ptr;
	ptr = &a; //a n�n adres de�erini at�yoruz
	cout<<"degiskenin adresi: "<<&a<<endl; //bilgisayarda her bilginin bir yeri oldu�u gibi de�i�kenlerinde bir yeri vard� ve bu yeri bulmak i�in bu kod veya alt�ndaki kod kullan�l�r.
	cout<<"degiskenin adresi: "<<ptr<<endl;
	cout<<"degiskenin degeri: "<<*ptr<<endl;
	
	*ptr=6; //a ya yeni bir de�er tan�mlad�k.
	cout<<"degiskenin yeni degeri: "<<*ptr<<endl;
	
	
}
