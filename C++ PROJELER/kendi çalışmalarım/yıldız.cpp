#include <iostream>
using namespace std;
int yildiz1 (int en,int boy)
{
	int satiruzunlugu=2*boy-1;
	for(int i=0;i<boy;i++)
	{
		for (int j=0;j<en;j++)
		{
			if (en<boy || j>satiruzunlugu-i-1)
			{
				cout<<" ";	
			}
			else
			cout<<"*";
		}
		cout<<endl;
	}
}
int main() 
{
	int en,boy;
	cout<<"en ve boy yukseklikleriyler yildiz yazdirma "<<endl;
	cout<<"en giriniz"<<endl;
	cin>>en;
	cout<<"boy giriniz"<<endl;
	cin>>boy;
	cout<<yildiz1(en,boy);
	
}
