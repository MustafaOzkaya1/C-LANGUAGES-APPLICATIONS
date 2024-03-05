#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
    setlocale(LC_ALL,("Turkish"));
	fstream  dosya;
	fstream dosya2;
	fstream dosya3;
	string satir;
	string kelime;
	
	dosya.open("belge.txt");
	while(getline( dosya,satir)) 
	{
	cout<<satir<<endl;
	}
	dosya.close();
	
    dosya2.open("belge2.txt");
    while (dosya2>>kelime) 
	{
	cout<<kelime<<endl;
	
    }
    dosya2.close();
    
    dosya3.open("belge3.txt");
    while (!dosya3.eof()) 
	{
	dosya3>>kelime;
	cout<<kelime<<endl;
	
    }
    dosya3.close();
    
    
}
