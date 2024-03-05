#include <iostream>

using namespace std;

int main () {
	
	setlocale(LC_ALL,"Turkish");
	
	/* 
	   or operatörü ||  = en az bir durum doðruysa true aksi halde false çýkýyor.
	   and operatörü && = en az bir durum yanlýþsa false aksi halde true çýkar
	   not operatörü !  = false iþlemi true ya true iþlemi false a çevirir
	   
	*/
	
	string sys_username = "mustafaozkaya";
    string sys_password = "12345678";
	
	string username;	
	string password;
	
	cout <<"KULLANICI ADINIZI GÝRÝNÝZ:" <<endl;
	
	cin >> username ;
	
	cout <<"ÞÝFRENÝZÝ GÝRÝNÝZ:"<<endl;
	
	cin >> password;
	
	if (sys_username==username && sys_password==password){
		cout<<"HOÞGELDÝNÝZ" <<endl;		
	}
	else if (sys_username != username && sys_password == password) {
		cout << "KULLANICI ADINIZ HATALI";	
	}
	else if (sys_username == username && sys_password != password) {
		cout<<" PAROLANIZ HATALI";
	} 
	else {
		
	cout<<"KULLANICI ADI VE PAROLA HATALI";
	
	}
	
	return 0;
}
