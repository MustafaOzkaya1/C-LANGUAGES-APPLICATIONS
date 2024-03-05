#include <iostream>
using namespace std;
 
int main() {
	 int i,j,en,boy;
	 /*
	cout<<"oluþturmak istediðiniz dikdortgenin enini giriniz"<<endl;
	cin>>en;
    cout<<"oluþturmak istediðiniz dikdortgenin boyunu giriniz"<<endl;
    cin>>boy;
 for (j=0 ; j<=boy ; j++) {
 

	for( i=0; i<=en ;i++) {
		cout<<"*";
	}
	cout<<endl;
	
	for (j=0 ; j<5 ; j++) {
 

	for( i=0; i<=j ;i++) {
		cout<<"*";
	}
	cout<<endl;
	
}
*/
for(int j=0; j<5 ;j++ ) {
	
	for (int i=0 ;i< 5-(j+1) ;i++) {
		
		cout<<" ";
		
	}
	for(int i=0;i<=j ;i++) 
	{
		cout<<"*";
		
	}
	cout<<endl;
	
	
	
	
}





}
