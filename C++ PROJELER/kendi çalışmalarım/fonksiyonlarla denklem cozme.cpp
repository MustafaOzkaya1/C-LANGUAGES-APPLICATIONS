#include <iostream>
using namespace std;
int carpma (int a,int b)
{
	return a*b;
}
int toplama (int a,int b)
{
	return a+b;
}
int cikarma (int a,int b)
{
	if (a>b) 
	{
		return a-b;	
	}
	else
	return b-a;
}
int cikarma (int a,int b)
{
	if (a>b) 
	{
		return a-b;	
	}
	else
	return b-a;
}
int bolme (int a,int b)
{

		return a/b;	

}

int main () 
{
	int sayi1,sayi2;
	string islem;
	setlocale(LC_ALL,"Turkish");
	cout<<"ilk sayýyý giriniz"<<endl;
	cin>>sayi1;
	cout<<"ikinci sayýyý giriniz"<<endl;
	cin>>sayi2;
	
	cout<<"yaptýrmak istediðiniz iþlemi giriniz: "<<endl;
	cin>>islem;
	
	if (islem=="carpma"||islem=="çarpma"||islem=="Çarpma"||islem=="ÇARPMA")
	{
		cout<<"sonuc: "<<carpma(sayi1,sayi2)<<endl;
	}
		
	if (islem=="bolme"||islem=="bölme"||islem=="Bölme"||islem=="BÖLME")
	{
		cout<<"sonuc: "<<bolme(sayi1,sayi2)<<endl;
	}
		
	if (islem=="toplama"||islem=="Toplama"||islem=="TOPLAMA")
	{
		cout<<"sonuc: "<<toplama(sayi1,sayi2)<<endl;
	}
		
	if (islem=="cýkarma"||islem="çýkarma"||islem=="Çýkarma"||islem=="ÇIKARMA")
	{
		cout<<"sonuc: "<<cikarma(sayi1,sayi2)<<endl;
	}
	
	
}
