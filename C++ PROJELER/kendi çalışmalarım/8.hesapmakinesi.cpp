#include <iostream>

using namespace std;

int main () {
	setlocale(LC_ALL,"Turkish");
	
	int a,b ;
	string islem ;
	
	cout<< "HESAP MAKÝNESÝNE HOÞGELDÝNÝZ..." <<endl;
	cout<< "TOPLAMA ÝÞLEMÝ ÝÇÝN (1) E BASINIZ" <<endl;
	cout<< "ÇIKARMA ÝÞLEMÝ ÝÇÝN (2) YE BASINIZ" <<endl;
	cout<< "ÇARPMA ÝÞLEMÝ ÝÇÝN (3) E BASINIZ" <<endl;
	cout<< "BÖLME ÝÞLEMÝ ÝÇÝN (4) E BASINIZ" <<endl;
	
	cout<< "ÝÞLEMÝ GÝRÝNÝZ" ;
	cin>>islem;
	
	if (islem == "1") {

	cout<<"a sayýsýný giriniz:";
	cin >> a;
	cout<< "b sayýsýný giriniz:";
	cin >> b;
	cout<< "toplamlarý:" << a+b << endl;
		
	}
	
	else if (islem == "2") {
		
    cout<<"a sayýsýný giriniz:";
	cin >> a;
	cout<< "b sayýsýný giriniz:";
	cin >> b;
	cout<< "farklarý:" << a-b << endl;	
	
	
	}
	else if ( islem== "3" ) {
    cout<<"a sayýsýný giriniz:";
	cin >> a;
	cout<< "b sayýsýný giriniz:";
	cin >> b;
	cout<< "çarpýmlarý:" << a*b << endl;	
		
	}
	
	else if (islem== "4" ) {
		
	cout<<"a sayýsýný giriniz:";
	cin >> a;
	cout<< "b sayýsýný giriniz:";
	cin >> b;
	cout<< "bölümleri:" << a/b << endl;	
		
	}
	
	else {
		cout << "HATALI ÝÞLEM GÝRDÝNÝZzz!!!!!";
		
		
	}
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
}
