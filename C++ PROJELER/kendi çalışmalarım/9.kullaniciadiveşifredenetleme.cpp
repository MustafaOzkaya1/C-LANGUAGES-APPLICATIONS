#include <iostream>

using namespace std;

int main () {
	
	setlocale(LC_ALL,"Turkish");
	
	/* 
	   or operat�r� ||  = en az bir durum do�ruysa true aksi halde false ��k�yor.
	   and operat�r� && = en az bir durum yanl��sa false aksi halde true ��kar
	   not operat�r� !  = false i�lemi true ya true i�lemi false a �evirir
	   
	*/
	
	string sys_username = "mustafaozkaya";
    string sys_password = "12345678";
	
	string username;	
	string password;
	
	cout <<"KULLANICI ADINIZI G�R�N�Z:" <<endl;
	
	cin >> username ;
	
	cout <<"��FREN�Z� G�R�N�Z:"<<endl;
	
	cin >> password;
	
	if (sys_username==username && sys_password==password){
		cout<<"HO�GELD�N�Z" <<endl;		
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
