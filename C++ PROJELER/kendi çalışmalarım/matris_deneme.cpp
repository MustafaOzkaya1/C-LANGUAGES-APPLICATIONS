#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL,"Turkish");
    int n;
	int sayi;
	int en_buyuk=0;
	
	cout << "Ka� adet say� gireceksiniz: ";
	cin >> n;
	
	cout << endl << "Say�lar� giriniz: " << endl;
	for(int i=1; i<=n; i++){
		cout << i  << ". say�y� giriniz: ";
		cin >> sayi;
		if (sayi>en_buyuk){
			en_buyuk=sayi;
		}
	}
	
	cout << endl;
	cout << "Girilen " << n << " say�dan en b�y���: " << en_buyuk << endl;
 
	return 0;
}
