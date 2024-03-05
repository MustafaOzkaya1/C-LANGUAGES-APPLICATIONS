#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
    setlocale(LC_ALL,("Turkish"));
	fstream  dosya;
	dosya.open("dosya.txt");
	dosya << "bu bir kontol mesajýdýr" ;
	dosya <<endl;
	dosya <<"kontrol basarýlý";
	dosya<<endl;

	dosya.close();
    
    fstream dosyadeneme;
    dosyadeneme.open("C:\\Users\\Excalibur\\Desktop\\C++ PROJELER\\dosyalama\\ofstream yapýsý\\dosyadeneme\\123\\denemedosya1.txt");
    dosyadeneme<<"deneme baþarýlý";
    cout<<"basarýlý";
    dosyadeneme.close();

	
	
}
