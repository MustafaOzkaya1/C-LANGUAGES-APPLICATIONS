//pointerla yer degistirme
#include <iostream>
using namespace std;
int main () {
int s1,s2,c=0;
	int *a;
	int *b;

	a=&s1;
	b=&s2;
	
	cout<<"1.degeri giriniz:"<<endl;
	cin>>*a;
	cout<<"2degeri giriniz: "<<endl;
	cin>>*b;

		
	c=*a;
	*a=*b;
	*b=c;
	
	cout<<"1. sayinin yeni degeri: "<<*a<<endl;
	cout<<"2. sayinin yeni degeri: "<<*b<<endl;

	
	

}
