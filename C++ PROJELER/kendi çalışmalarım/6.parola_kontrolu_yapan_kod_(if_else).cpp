#include <iostream> 

using namespace std;

int main () {
	
	setlocale(LC_ALL,"Turkish");
	string password = "12345678";
	
	string input;
	
	cout<< "L�TFEN PAROLANIZI G�R�N: ";
	
	cin>> input;
	
	if (password == input) {
		
		cout << "PAROLA DO�RU";
		}
		
		else {
			
			
			cout<< "PAROLANIZI YANLI� G�RD�N�Z";
			
		}
	
	
	
	
	
	
	
} 
