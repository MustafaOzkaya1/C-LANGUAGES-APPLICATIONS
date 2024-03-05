#include <iostream>
using namespace std;

int main() {

  int n, cevirilmissayi = 0, a;

  cout << "sayi giriniz: ";
  cin >> n;

  while(n != 0) {
    a= n % 10;
    cevirilmissayi = cevirilmissayi * 10 + a;
    n /= 10;
  }

  cout << "cevirilmis sayi = " << cevirilmissayi;

  return 0;
}
