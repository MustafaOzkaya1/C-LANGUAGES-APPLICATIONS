#include <iostream>
using namespace std;
int main () {
	/*break:D�ng�de break komutu �al��t�r�ld��� zaman d�ng� an�nda sona erer.
	continue: D�ng�de continue komutu �al��t�t�ld��� zaman d�ng� alt�ndaki komutlar� �al��t�rmadan ba�a d�ner.*/
	string sys_username ="mustafa_ozkaya";
	string sys_password ="12345678";
	
	string  username;
	string  password;
	
	while (true) 
	{
		cout<<"kullanici adi:";
		cin>>username;
		cout<<"sifre:";
		cin>>password;
		
		if (username==sys_username && password==sys_password) {
			cout<<"hosgeldiniz";
			break;
		}
		else if (username!=sys_username && password==sys_password)
		cout<<"hatal� kullanici adi";
		
		else if (username==sys_username && password!=sys_password)
		cout<<"hatal� parola";
		
		else if (username!=sys_username && password!=sys_password)
		cout<<"hatal� kullanici adi ve parola";
	}
	
	
	
	return 0;
	
	
}
