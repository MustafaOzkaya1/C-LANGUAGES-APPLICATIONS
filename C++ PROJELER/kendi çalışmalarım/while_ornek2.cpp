#include <iostream>
using namespace std;
int main() {
int input, sum = 0;
cout << "Enter numbers to sum, type '=' to end the list:";
while (cin >> input)
sum += input;
cout << "Sum = " << sum << '\n';
}
