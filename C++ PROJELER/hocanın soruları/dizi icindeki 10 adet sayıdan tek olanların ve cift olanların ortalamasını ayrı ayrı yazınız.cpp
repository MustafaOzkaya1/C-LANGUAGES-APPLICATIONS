#include <iostream>
using namespace std;
int main () {
int dizi [10] = {}	;
int n=0;
int ntop=0;
int m=0;
int mtop=0;

for(int i=0;i<10;i++) {
	
	cout<<i+1<<".sayiyi giriniz"<<endl;
	cin>>dizi[i];
	
	if(i%2==0) {
		n++;
		ntop+=dizi[i];
	}
	else {
	
	m++;
    mtop+=dizi[i];
	}
		
	
}
		cout<<"cift sayilarin ortalamasi: "<<float (ntop)/n<<endl;
		cout<<"teksayilarin ortalamasi: "<<float (mtop)/m<<endl;

	
	
	
	
	
	
	
}
