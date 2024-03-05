#include <iostream>
using namespace std;
struct bilgi{
	string name;
	int id;
	string depart;
};
int main () 
{
	bilgi bilgi1= {"mustafa ozkaya",21,"app developer"};
	bilgi *ptr=&bilgi1;
	cout<<bilgi1.name<<endl;
  	cout<<ptr->depart<<endl;
   	
	
}
