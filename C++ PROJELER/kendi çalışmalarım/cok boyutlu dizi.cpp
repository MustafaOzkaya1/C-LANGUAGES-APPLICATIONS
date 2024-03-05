//5 farklý dersin 2 not bilgisini giriniz
#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL,"Turkish");
	int notlar [2][2][2];

      for (int i=0;i<2;i++ ) {
      	for (int j=0 ;j<2;j++) {
      		for(int k=0 ;k<2 ;k++) {
      			
      			cout<<i+1<<".öðrencinin"<<j+1<<".dersinin"<<k+1<<".notu"<<endl;
      			cin>> notlar[i][j][k];
			  }
      		
		  }
	  }	
	
	
	
	
	
	
	
	
	
	
}

