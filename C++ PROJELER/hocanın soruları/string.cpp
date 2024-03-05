/*• operator[]—provides access to the value stored at a given index within the string

• operator=—assigns one string to another

• operator+=—appends a string or single character to the end of a string object

• at —provides bounds-checking access to the character stored at a given index
• length —returns the number of characters that make up the string
• size —returns the number of characters that make up the string (same as length)
• find —locates the index of a substring within a string object
• substr —returns a new string object made of a substring of an existing string object
• empty —returns true if the string contains no characters; returns false if the string contains one or
more characters
• clear —removes all the characters from a string
*/

#include <iostream>
#include <string>

using namespace std;
int main () {
	string kelime= "mustafa";
	
	cout<<kelime.length() <<endl;
	if (kelime.empty())
	cout<<"empty";
	else 
	cout<<"not empty"<<endl;
	kelime.clear();
	if (kelime.empty())
	cout<<"empty"<<endl;
	else 
	cout<<"not empty"<<endl;
	kelime="iyi";
	kelime+="yim";
	cout<<kelime<<endl;
	cout<<kelime[0]<<endl;
	cout<<kelime[kelime.length()-1]<<endl;
	cout<<kelime.substr(2,5)<<endl;
	string first="ABC",last="XYZ";
	
	cout<<first+last<<endl;
	if(first=="ABC")
	cout<<"equal"<<endl;
	else
	cout<<"not equal";
	
	if(first=="XYZ")
	cout<<"equal";
	else
	cout<<"not equal";
	

}
