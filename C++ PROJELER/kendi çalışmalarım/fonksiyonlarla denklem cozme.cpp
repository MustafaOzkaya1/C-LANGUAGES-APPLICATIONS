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
	cout<<"ilk say�y� giriniz"<<endl;
	cin>>sayi1;
	cout<<"ikinci say�y� giriniz"<<endl;
	cin>>sayi2;
	
	cout<<"yapt�rmak istedi�iniz i�lemi giriniz: "<<endl;
	cin>>islem;
	
	if (islem=="carpma"||islem=="�arpma"||islem=="�arpma"||islem=="�ARPMA")
	{
		cout<<"sonuc: "<<carpma(sayi1,sayi2)<<endl;
	}
		
	if (islem=="bolme"||islem=="b�lme"||islem=="B�lme"||islem=="B�LME")
	{
		cout<<"sonuc: "<<bolme(sayi1,sayi2)<<endl;
	}
		
	if (islem=="toplama"||islem=="Toplama"||islem=="TOPLAMA")
	{
		cout<<"sonuc: "<<toplama(sayi1,sayi2)<<endl;
	}
		
	if (islem=="c�karma"||islem="��karma"||islem=="��karma"||islem=="�IKARMA")
	{
		cout<<"sonuc: "<<cikarma(sayi1,sayi2)<<endl;
	}
	
	
}
