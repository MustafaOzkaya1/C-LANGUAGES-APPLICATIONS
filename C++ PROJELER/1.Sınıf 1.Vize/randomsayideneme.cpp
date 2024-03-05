#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	setlocale(LC_ALL,"Turkish");
    int tahmin=0;
	int rassayi=0;
	int exit;

	
	
	srand(time(0)*137137);
	rassayi=rand()%99+1;
	
	cout<<"cýkmak icin 0 a devam etmek icin 1 e basin"<<endl;
	cin>>exit;
	switch(exit)
	 {
	case 0:
	break;
	
	case 1:
		
	for(int i=0;i<8;i++) {
		cout<<"tahmin:"<<endl;
		cin>>tahmin;
		if (tahmin==rassayi) {
			cout<<"dogru tahmin"<<endl;
			break;
		}
			else
			if(tahmin>rassayi) {
				cout<<"asagý"<<endl;
			}
			else
			cout<<"yukari"<<endl;
			 
		
	}
	
	


	
	
	
	 }

	

}
	
	
	
	
	
	
	
	

