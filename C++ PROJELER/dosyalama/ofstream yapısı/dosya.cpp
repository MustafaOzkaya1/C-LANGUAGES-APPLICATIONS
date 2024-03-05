#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main () {
	fstream dosya ("adres.txt",fstream::out|ios::app);
	dosya<<"mustafa ozkaya"<<endl;
	dosya<<"konya"<<endl;
	dosya<<"42"<<endl;
	dosya.close();	
	cout<<"dosya yazma islemi tamamlandi"<<endl;
	}

