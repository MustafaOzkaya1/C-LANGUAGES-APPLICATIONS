#include <iostream>
using namespace std;
int main () {
	int sayac1=0;
	int sayac2=0;
	int toplamtek=0;
	int toplamcift=0;
	
	for(int i=0;i<101;i++) {
		
		if(i%2==0) {
			sayac1++;
			toplamcift=i+toplamcift;
		    cout<<" "<<i;	
		}
		
	}
			cout<<endl;

		for(int j=0;j<101;j++) {
		
		if(j%2!=0) {
			sayac2++;
			toplamtek=j+toplamtek;
		    cout<<" "<<j;	
		}
		
		
	}
		cout<<endl;
	cout<<"tek sayilarin toplami"<<toplamtek<<endl;
	cout<<"cift sayilarin toplami"<<toplamcift<<endl;
	
	cout<<"tek sayilarin ortalamasi"<<float(toplamtek)/sayac1<<endl;
	cout<<"cift sayilarin ortalamasi"<<float(toplamcift)/sayac2<<endl;
	
	return 0;
	
	

	
	
	
	
	
	
	
	
	
	
}
