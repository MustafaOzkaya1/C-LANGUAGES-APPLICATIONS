#include <iostream>
using namespace std;
int main () {
	
	setlocale(LC_ALL,"Turkish");
	string parola = "12345678";
	string yeni = "evet";
	string sifirla = "evet";
	string yenisifre = "yenisifre";
	
		cout << "Parolanýzý Girin:";
	cin>> parola;
	
	if (parola!="12345678") {
	cout<<"Hatalý Parola Girdiniz!!"<<endl;	
	cout<<"Þifrenizi Hatýrlamýyor Musunuz?"<<endl;
    
    
    if(yeni=="evet") {
    	
    cin>> yeni;
    cout << "Þifrenizi Sýfýrlamak Ýster Misiniz?" <<endl;
    
    if(sifirla =="evet") {
    	
    	cin >> sifirla ;
    	cout <<"Yeni Þifreyi Girin:"<<endl;
    	parola = "yenisifre";
		cin >> yenisifre;
    	cout << "Þifreniz Baþarýyla Sýfýrlandý"<<endl;
		
		
	}
}
}
}

	

