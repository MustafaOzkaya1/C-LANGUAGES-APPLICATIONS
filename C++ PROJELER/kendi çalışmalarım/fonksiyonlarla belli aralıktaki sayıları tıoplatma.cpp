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
	cout<<"girdiðiniz iki sayý arsýndaki sayýlarýn toplamýný bulan kod "<<endl;
	cout<<"en dusuk deger: "<<endl;
	cin>>a;
	cout<<"en yuksek deger :"<<endl;
	cin>>b;
	cout<<"toplam"<<fonksiyon(a,b)<<endl;
	
}
