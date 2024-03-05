#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main () {
	srand(time(0));
	int dizi [10];
	int t=0;
	
	for (int i=0;i<10 ;i++) {
		dizi[i] = rand()%101+100; //%101 sýnýr olusturur 100 e kadar & %101+100 100'den 200'e kadar
		cout << dizi[i] <<" ";
		t+=dizi[i]; //t =t +.....  = t+=
		
	}	
	
	cout<<endl;
	cout <<"dizi elemanlarinin toplamý"<<t<<endl;
		cout <<"dizi elemanlarinin ortalamasý"<<t/10.0 <<endl;

}
