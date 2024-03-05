//5 farklý dersin 2 notunu giriniz
#include <iostream>
using namespace std;
int main () {
	int dersnotlari [5] [2] ;
	
	for (int i=0 ;i<5 ;i++) {
		
		for (int j=0 ;j<2 ;j++) {
		
		cout<<i+1<<".dersin"<<j+1<<".notu"<<endl;
		cin>> dersnotlari [i][j];
	}
	}
	
	for (int i=0 ;i<5;i++) {
		
		for(int j=0 ;j<2 ;j++) {
			
			cout<<i+1<<".dersin"<<j+1<<".notu"<<dersnotlari [i][j]<<endl;
		}
		
	}
	
	
	
}
