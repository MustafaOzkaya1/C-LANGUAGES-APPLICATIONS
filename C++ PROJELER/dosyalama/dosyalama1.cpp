#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
 int sayi;
 string satir;
 ifstream dosya("dosya.txt");
 ofstream ciftler("ciftler.txt");
 ofstream tekler("tekler.txt");
 while (dosya>>sayi)
 {
 	if(sayi%2==0) 
	 {
	 	ciftler<<sayi;
	 	cout<<endl;
	 }
	 else 
	  tekler<<sayi;
	  cout<<endl;
 }
 	dosya.close();
 	ciftler.close();
 	tekler.close();
 	
	 ciftler.open("ciftler.txt");
 	
	 while (tekler<<satir) 
	 {
	 	cout<<satir<<endl;
	 }
}
