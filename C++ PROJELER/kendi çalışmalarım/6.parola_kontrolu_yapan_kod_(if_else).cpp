#include <iostream> 

using namespace std;

int main () {
	
	setlocale(LC_ALL,"Turkish");
	string password = "12345678";
	
	string input;
	
	cout<< "LÜTFEN PAROLANIZI GÝRÝN: ";
	
	cin>> input;
	
	if (password == input) {
		
		cout << "PAROLA DOÐRU";
		}
		
		else {
			
			
			cout<< "PAROLANIZI YANLIÞ GÝRDÝNÝZ";
			
		}
	
	
	
	
	
	
	
} 
