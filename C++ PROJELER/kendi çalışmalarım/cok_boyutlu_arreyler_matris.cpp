#include <iostream>
using namespace std;
int main () {
	
/*	int matris [3] [3] ={{1,2,3} , {4,5,6} , {7,8,9}}; // "amaç 3 e 3 lük bir matris oluþturmak 3 tane bölmenin içine 3 bölme açmak
	                                                  //cout<<matris[0] [1];  "bu iþlem sayesinde 0. indexin 1. deðeri yani 2 yi yazdýrýrýz"
	for (int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
		//	cout<<"i ve j : "<<i<<" "<<j<<endl;
		cout<<matris [i] [j]<<" ";
		
		}
		cout<<endl;
		
	}
	
	*/
	
	int matris [3] [3];
		cout << "9 sayi giriniz"<<endl;
		
	 for(int i=0;i<3;i++) {
	    for(int j=0 ; j<3 ; j++){
	    	
			cin>>matris[i] [j];
	    	
	    	
		}
	 }
	
	cout<<"matris:"<<endl;
	
		for (int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
		                            //	cout<<"i ve j : "<<i<<" "<<j<<endl;
		cout<<matris [i] [j]<<" ";
}

	cout<<endl;
}

	
	
	
	
	return 0;
}
