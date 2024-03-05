#include <iostream>
using namespace std;
int main () {
	char h;
	setlocale(LC_ALL,"Turkish");
	for(int i=0;i<10;i++) {
	
	cout<<"bir harf giriniz: "<<endl;
	cin>>h;
	
	if(h=='a'|| h=='e'|| h=='ý'|| h=='i'|| h=='o'|| h=='ö'|| h=='u'|| h=='ü'|| h=='A'|| h=='E'|| h=='I'|| h=='Ý' || h=='O' || h=='Ö'|| h=='U'|| h=='Ü'){
		cout<<"girdiginiz harf ünlü"<<endl;
	}
	else

	cout<<"girdiðiniz harf ünsüz"<<endl;
	
}
}
