//0-100 aras� girilen puan� 0-5 aras� nota �eviren C++ Kodlar� :
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"Turkish");
	int puan;
	cout<<"0-100 ars� puan�n�z� 0-5 lik sisteme d�n��t�ren programa ho�geldiniz"<<endl;
	cout<<"----------------------------------------------------------------------"<<endl;
	cout<<"0-100 ars� puan�n�z� giriniz:"<<endl;
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
		cout<<"ge�ersiz"<<endl;
	}	
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	

