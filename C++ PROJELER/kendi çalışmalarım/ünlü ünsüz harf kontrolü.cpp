#include <iostream>
using namespace std;
int main () {
	char h;
	setlocale(LC_ALL,"Turkish");
	for(int i=0;i<10;i++) {
	
	cout<<"bir harf giriniz: "<<endl;
	cin>>h;
	
	if(h=='a'|| h=='e'|| h=='�'|| h=='i'|| h=='o'|| h=='�'|| h=='u'|| h=='�'|| h=='A'|| h=='E'|| h=='I'|| h=='�' || h=='O' || h=='�'|| h=='U'|| h=='�'){
		cout<<"girdiginiz harf �nl�"<<endl;
	}
	else

	cout<<"girdi�iniz harf �ns�z"<<endl;
	
}
}
