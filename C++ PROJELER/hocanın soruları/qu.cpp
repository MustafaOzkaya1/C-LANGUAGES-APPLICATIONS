//klavyeden girilen iki sayı arası yer değiştirme işlemini yapınız
#include <iostream>
using namespace std;
int main () {
	int sayi1; //x
	int sayi2; //y
	int a = 0; //z
	cout<<"1.sayiyi giriniz"<<endl;
	cin>>sayi1;
	cout<<"2.sayiyi giriniz"<<endl;
	cin>>sayi2;
	string str1 = "evet";
	string input;
	cout<<"iki sayiyi yer degistirmek ister misin"<<endl;
	cin>>input;
	
	if (str1==input) {
		a=sayi1;
	    sayi1=sayi2;
		sayi2=a;
	
	     cout<<"yeni sayi2:"<<sayi1;	
		 cout<<"yeni sayi1:"<<sayi2;		
	
	}
	
	else {
		
		cout<<"isleminiz iptal edilmiştir"<<endl;
		
	}
    
    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
