#include <iostream> 

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Turkish");                                         // t�rk�e karakter kullanmaya izin verir.
	
	int s1,s2;
	cout << "aritmetik i�lemler i�in 2 adet say� giriniz\n";
	cout << "1.say�y� giriniz= ";        
	cin >>s1;                                                           // cin komutu sayesinde kullan�c�dan iceriye veri alabiliyoruz.
	cout<< "2.say�y� giriniz= ";
	cin>> s2;
	cout<<"toplama i�lemi= "<< s1 + s2  <<endl;
	cout<<"��karma i�lemi= "<< s1 - s2  <<endl;
	cout<<"�arpma i�lemi= "<< s1 * s2  <<endl;
	cout<<"b�lme i�lemi= "<< (double)s1 / s2  <<endl;                   // double sayesinde ondal�kl� �ekilde yazd�r�yoruz.
	cout<<"mod alma i�lemi= "<< s1 % s2  <<endl;
	s1+=3; // s1=s1+3
	cout << "s1 de�i�keninin yeni de�eri= " << s1 <<endl;
	
	/* cin >> s1 >> s2 >>; �eklnde yazsayd�k de�erleri yan yana girerek toplayabilirdik */
	
	
	return 0;
	

	
}
