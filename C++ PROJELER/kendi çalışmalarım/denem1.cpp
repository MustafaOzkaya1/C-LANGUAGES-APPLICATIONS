#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int size; 
cout << "Please enter the table size: ";
cin >> size;
cout << " ";

int column = 1;
while (column <= size) {
column++;
}

cout << '\n';
cout << "*";
column = 1;


while (column <= size) {
cout << "*"; 
column++;
}
cout << '\n';
int row = 1;

while (row <= size) { 
cout<<"*"; 
int column = 1; 

while (column <= size) { 
cout << "*";
column++; 
}

row++; 
cout << '\n'; 
}
}
