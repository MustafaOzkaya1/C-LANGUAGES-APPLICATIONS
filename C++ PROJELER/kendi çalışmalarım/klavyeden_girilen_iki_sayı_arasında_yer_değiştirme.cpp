//klavyeden girilen vize ve final notlar�na g�re gecme ve kalma kontrol ediniz (gecme notu 60 vizenin %40� final�n %60 � >=ise gecmistir)
#include <iostream>
using namespace std;
int main () {
	
	int vize;
	int final;
	int a;
	cout<<"vize notunu giriniz"<<endl;
	cin>>vize;
	cout<<"final notunu giriniz"<<endl;
	cin>>final;
	
	a =final*60/100+vize*40/100;
	if (a>=60) {
		
		cout<<"gectiniz"<<endl;
	}
		else{
			cout<<"kaldiniz"<<endl;
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
