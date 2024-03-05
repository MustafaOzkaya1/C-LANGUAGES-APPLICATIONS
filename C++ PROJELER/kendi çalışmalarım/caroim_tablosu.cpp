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
cout << setw(4) << column; 
column++;
}
cout << '\n';
cout << " +";
column = 1;
while (column <= size) {
cout << "|----|"; 
column++;
}
cout << '\n';

int row = 1;
while (row <= size) { 
cout << setw(2) << row << " |"; 
int column = 1; 
while (column <= size) { 
int product = row*column; 
cout << setw(4) << product; 
column++; 
}
row++; 
cout << '\n'; 
}
}
