#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main () {
	string veri;
	int i=0;
	file.open("dosya.txt",ios::out|ios::app);
	if (file.is_open()){
		while(i<5){
			file<<"super";
			i++;
		}
	}
	file.close();
}
