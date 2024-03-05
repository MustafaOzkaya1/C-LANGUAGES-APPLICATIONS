#include <iostream>
#include <iomanip>
using namespace std;
int main() {
int size; 
cout << "tablo buyuklugu girin: ";
cin >> size;
int row = 1;
while (row <= size) { 
int column = 1; 
while (column <= size) { 
int product = row*column; 
cout << product<< setw(4); 
column++; 
}
cout << '\n'; 
row++; 
}
}
	

