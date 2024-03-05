#include <iostream>
using namespace std;
 
int main()
{
    string str = "Programlama Örnekleri";
    char chr = 'a';
    int sayac = 0;
 
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  chr)
        {
            ++ sayac;
        }
    }
 
    cout << chr << " = " << sayac << " adet bulundu.";
 
    return 0;
}
