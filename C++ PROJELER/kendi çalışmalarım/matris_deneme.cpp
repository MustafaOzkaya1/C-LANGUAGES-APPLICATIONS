#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL,"Turkish");
    int n;
	int sayi;
	int en_buyuk=0;
	
	cout << "Kaç adet sayý gireceksiniz: ";
	cin >> n;
	
	cout << endl << "Sayýlarý giriniz: " << endl;
	for(int i=1; i<=n; i++){
		cout << i  << ". sayýyý giriniz: ";
		cin >> sayi;
		if (sayi>en_buyuk){
			en_buyuk=sayi;
		}
	}
	
	cout << endl;
	cout << "Girilen " << n << " sayýdan en büyüðü: " << en_buyuk << endl;
 
	return 0;
}
