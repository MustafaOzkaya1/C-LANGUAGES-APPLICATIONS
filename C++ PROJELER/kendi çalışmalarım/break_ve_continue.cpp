#include <iostream>
using namespace std;
int main () {
	/*break:Döngüde break komutu çalýþtýrýldýðý zaman döngü anýnda sona erer.
	continue: Döngüde continue komutu çalýþtýtýldýðý zaman döngü altýndaki komutlarý çalýþtýrmadan baþa döner.*/
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
		cout<<"hatalý kullanici adi";
		
		else if (username==sys_username && password!=sys_password)
		cout<<"hatalý parola";
		
		else if (username!=sys_username && password!=sys_password)
		cout<<"hatalý kullanici adi ve parola";
	}
	
	
	
	return 0;
	
	
}
