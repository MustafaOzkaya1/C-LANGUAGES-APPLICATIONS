#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main () {
	fstream dosya;
	dosya.open("adres.txt");
	string s;
	dosya>>s;
	while (!dosya.eof()) {
		cout<<s<<endl;
		dosya>>s;
	dosya.close();	
	}
}
