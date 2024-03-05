//0-100 arasý girilen puaný 0-5 arasý nota çeviren C++ Kodlarý :
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"Turkish");
	int puan;
	cout<<"0-100 arsý puanýnýzý 0-5 lik sisteme dönüþtüren programa hoþgeldiniz"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"0-100 arsý puanýnýzý giriniz:"<<endl;
	cin>>puan;
	
	if(puan>84) {
		
	cout<<"5"<<endl;
}
	else if (puan>69) {
		cout<<"4"<<endl;
	}
	else if (puan>59) {
		cout<<"3"<<endl;
	}	
	else if (puan>49) {
		cout<<"2"<<endl;
	}
	else if (puan<=0) {
		cout<<"1"<<endl;
	}  
	else {
		cout<<"geçersiz"<<endl;
	}	
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	

