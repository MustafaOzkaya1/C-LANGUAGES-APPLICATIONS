#include <iostream>
using namespace std;
int main () {
	
	setlocale(LC_ALL,"Turkish");
	string parola = "12345678";
	string yeni = "evet";
	string sifirla = "evet";
	string yenisifre = "yenisifre";
	
		cout << "Parolan�z� Girin:";
	cin>> parola;
	
	if (parola!="12345678") {
	cout<<"Hatal� Parola Girdiniz!!"<<endl;	
	cout<<"�ifrenizi Hat�rlam�yor Musunuz?"<<endl;
    
    
    if(yeni=="evet") {
    	
    cin>> yeni;
    cout << "�ifrenizi S�f�rlamak �ster Misiniz?" <<endl;
    
    if(sifirla =="evet") {
    	
    	cin >> sifirla ;
    	cout <<"Yeni �ifreyi Girin:"<<endl;
    	parola = "yenisifre";
		cin >> yenisifre;
    	cout << "�ifreniz Ba�ar�yla S�f�rland�"<<endl;
		
		
	}
}
}
}

	

