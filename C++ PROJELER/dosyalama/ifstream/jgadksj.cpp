#include <iostream> 
using namespace std;
int main()
{
	int tarih=12092022;
    int gun,yil=0,ay=0,hafta=0;
	string bugun,a="pazartesi",b="sali",c="carsamba",d="persembe",e="cuma",f="cumatesi",g="pazar";
	cout<<"12/09/2022den kac gun sonra?"<<endl;
	cin>>gun;
	yil+=gun/360;
	gun+=gun%360;
	ay+=gun/30;
	ay+=ay%12;
	gun+=gun%30;
	if(gun=1)
	{
		bugun=f;
	}
	if(gun=2)
	{
		bugun=g;
	}
	if(gun=3)
	{
		bugun=a;
	}
	if(gun=4)
	{
		bugun=b;
	}
	if(gun=5)
	{
		bugun=c;
	}
	if(gun=6)
	{
		bugun=d;
	}
	if(gun=7)
	{
		bugun=e;
	}
	cout<<gun<<endl;
	
	tarih=tarih+gun*1000000+ay*10000+yil;
	cout<<tarih<<" "<<bugun<<endl;
}
