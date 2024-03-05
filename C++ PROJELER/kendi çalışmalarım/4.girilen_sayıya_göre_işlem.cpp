#include <iostream> 

using namespace std;

int main () {
	
	setlocale(LC_ALL, "Turkish");                                         // türkçe karakter kullanmaya izin verir.
	
	int s1,s2;
	cout << "aritmetik iþlemler için 2 adet sayý giriniz\n";
	cout << "1.sayýyý giriniz= ";        
	cin >>s1;                                                           // cin komutu sayesinde kullanýcýdan iceriye veri alabiliyoruz.
	cout<< "2.sayýyý giriniz= ";
	cin>> s2;
	cout<<"toplama iþlemi= "<< s1 + s2  <<endl;
	cout<<"çýkarma iþlemi= "<< s1 - s2  <<endl;
	cout<<"çarpma iþlemi= "<< s1 * s2  <<endl;
	cout<<"bölme iþlemi= "<< (double)s1 / s2  <<endl;                   // double sayesinde ondalýklý þekilde yazdýrýyoruz.
	cout<<"mod alma iþlemi= "<< s1 % s2  <<endl;
	s1+=3; // s1=s1+3
	cout << "s1 deðiþkeninin yeni deðeri= " << s1 <<endl;
	
	/* cin >> s1 >> s2 >>; þeklnde yazsaydýk deðerleri yan yana girerek toplayabilirdik */
	
	
	return 0;
	

	
}
