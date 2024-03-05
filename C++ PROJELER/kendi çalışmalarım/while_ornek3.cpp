/*#include <iostream>
int main() {
int power = 1;
while (power <= 1000000000) {
std::cout << power << '\n';
power *= 10;
}
}
*/
#include <iostream>
#include <iomanip>
// Print the powers of 10 from 1 to 1,000,000,000
int main() {
int power = 1;
while (power <= 1000000000) {
// Right justify each number in a field 10 wide
std::cout << std::setw(10) << power << '\n';
power *= 10;
}
}

