#include <iostream>
using namespace std;
int main () {
	/*
	int array [4]; 
	"BU KOMUT SAYES�NDE HAFIZADA 4 B�LME A�ILIR BU B�LMELERERE SAYI TAY�N ED�L�R 
    VE PRPGRAM ARTIK O SAYILAR �ST�NDEN ��LEM YAPAR VE ONA G�RE E�LE�T�R�R"
	                                                array[4]=0.b�lme [1]
	                                                         1.b�lme [2]
															 2.b�lme [3]
															 3.b�lme [4] "arraylerde saymaya 0 dan ba�lan�r"
															 
	array[0] = 1; 
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	
	cout<<"0.index:"<<array[0]<<endl; 
	cout<<"1.index:"<<array[1]<<endl; 
	cout<<"2.index:"<<array[2]<<endl; 
	cout<<"3.index:"<<array[3]<<endl; 

	
	// int array [] = {1,2,3,4} "tan�mlama bu �ekilde de yap�labilir"
	
	double array2 []={1.2,3.1,42.1,21.21};
	
	for(int i=0; i<4 ; i++) {
	
	cout<<i<<".index degeri: "<<array2[i]<<endl;
	
}
	
		*/
		
		string array3[4];
		
		for(int i=0 ; i<4 ; i++)
		{
		cout<<"1. kelime giriniz: "<<endl;
		cin>> array3[i=0]	;
			cout<<"2. kelime giriniz: "<<endl;
		cin>> array3[i=1]	;
			cout<<"3. kelime giriniz: "<<endl;
		cin>> array3[i=2]	;
			cout<<"4. kelime giriniz: "<<endl;
		cin>> array3[i=3]	;
			
		}
	    for(int i=0; i<4 ; i++)
	    {
	    	cout<<i<<".index degeri: "<<array3[i]<<endl;
		}
	
	return 0;
	
	
	
	
}
