#include <iostream>
using namespace std;
int toplam;
int fonksiyon (int a,int b)
{
for (;a<b;a++)
{
 toplam=toplam+a;
 	
}
 return toplam;	
}
int main ()
{
	int a ,b;
	cout<<"girdi�iniz iki say� ars�ndaki say�lar�n toplam�n� bulan kod "<<endl;
	cout<<"en dusuk deger: "<<endl;
	cin>>a;
	cout<<"en yuksek deger :"<<endl;
	cin>>b;
	cout<<"toplam"<<fonksiyon(a,b)<<endl;
	
}
