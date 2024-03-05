#include <iostream>
using namespace std;
int main() {
int yukseklik; 
cout << "yuksekligi giriniz: ";
cin >> yukseklik;
int a = 0; 
while (a < yukseklik) { 
int b = 0;
while (b < yukseklik - a) {
cout << " ";
b++;
}
b = 0;
while (b < 2*a + 1) {
cout << "*";
b++;
}
cout << '\n';
a++;

}

while (a < yukseklik) { 
int b = 0;
while (b < yukseklik - a) {
cout << " ";
b--;
}
b = 0;
while (b < 2*a + 1) {
cout << "*";
b--;
}
cout << '\n';
a--;

}
}

