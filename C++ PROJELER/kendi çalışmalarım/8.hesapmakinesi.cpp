#include <iostream>

using namespace std;

int main () {
	setlocale(LC_ALL,"Turkish");
	
	int a,b ;
	string islem ;
	
	cout<< "HESAP MAK�NES�NE HO�GELD�N�Z..." <<endl;
	cout<< "TOPLAMA ��LEM� ���N (1) E BASINIZ" <<endl;
	cout<< "�IKARMA ��LEM� ���N (2) YE BASINIZ" <<endl;
	cout<< "�ARPMA ��LEM� ���N (3) E BASINIZ" <<endl;
	cout<< "B�LME ��LEM� ���N (4) E BASINIZ" <<endl;
	
	cout<< "��LEM� G�R�N�Z" ;
	cin>>islem;
	
	if (islem == "1") {

	cout<<"a say�s�n� giriniz:";
	cin >> a;
	cout<< "b say�s�n� giriniz:";
	cin >> b;
	cout<< "toplamlar�:" << a+b << endl;
		
	}
	
	else if (islem == "2") {
		
    cout<<"a say�s�n� giriniz:";
	cin >> a;
	cout<< "b say�s�n� giriniz:";
	cin >> b;
	cout<< "farklar�:" << a-b << endl;	
	
	
	}
	else if ( islem== "3" ) {
    cout<<"a say�s�n� giriniz:";
	cin >> a;
	cout<< "b say�s�n� giriniz:";
	cin >> b;
	cout<< "�arp�mlar�:" << a*b << endl;	
		
	}
	
	else if (islem== "4" ) {
		
	cout<<"a say�s�n� giriniz:";
	cin >> a;
	cout<< "b say�s�n� giriniz:";
	cin >> b;
	cout<< "b�l�mleri:" << a/b << endl;	
		
	}
	
	else {
		cout << "HATALI ��LEM G�RD�N�Zzz!!!!!";
		
		
	}
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
}
