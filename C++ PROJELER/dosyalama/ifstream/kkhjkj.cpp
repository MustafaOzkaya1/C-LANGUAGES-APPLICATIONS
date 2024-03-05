#include <iostream> 
using namespace std;
int main()
{
    
    int gun=12,yil=2022,ay=9 ;
	string bugun,a="pazartesi",b="sali",c="carsamba",d="persembe",e="cuma",f="cumatesi",g="pazar";
	cout<<"12/09/2022den kac gun sonra?"<<endl;
	int yedigun=0;
	int yenigun=0;
	int y;
	int x;
	int z;
	cin>>x;
    yedigun=gun+x;
    y=yedigun%30;
   
    if(yedigun<=30){
    
     cout<<yedigun<<endl;
	}
    
 
	else {
	
	 
    z=yedigun-30*y;
    
    
}
   for(int i=0;i<y;i++) 
	{
    ay++;
	}
   cout<<"gun: "<<z<<"ay: "<<ay<<endl;

}


