#include <iostream>
#include <fstream>
using namespace std;
int main () 
{
    setlocale(LC_ALL,("Turkish"));
	fstream  dosya;
	dosya.open("dosya.txt");
	dosya << "bu bir kontol mesaj�d�r" ;
	dosya <<endl;
	dosya <<"kontrol basar�l�";
	dosya<<endl;

	dosya.close();
    
    fstream dosyadeneme;
    dosyadeneme.open("C:\\Users\\Excalibur\\Desktop\\C++ PROJELER\\dosyalama\\ofstream yap�s�\\dosyadeneme\\123\\denemedosya1.txt");
    dosyadeneme<<"deneme ba�ar�l�";
    cout<<"basar�l�";
    dosyadeneme.close();

	
	
}
