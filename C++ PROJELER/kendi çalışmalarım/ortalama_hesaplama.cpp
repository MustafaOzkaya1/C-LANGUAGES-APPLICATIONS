#include <iostream>
using namespace std;
//Girilen yazýlý ortalamasýný hesaplayarak ortalama 50' den küçükse Kaldý, deðilse Geçti yazdýran C++ kodlar
int main () {
   setlocale(LC_ALL,"Turkish");
   int puan,puan1,puan2;
   cout<<"1.puanýnýzý giriniz:"<<endl;
   cin>>puan;
   cout<<"2.puanýnýzý giriniz:"<<endl;
   cin>>puan1;
   cout<<"3.puanýnýzý giriniz:"<<endl;
   cin>>puan2;
   
   if ((puan+puan1+puan2) / 3 >= 50) {
   	cout<<"geçtiniz"<<endl;
   	
}
   
   	else  {
   		cout<<"kaldýnýz"<<endl;
	   }
   	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
