//Girilen say�n�n asal m�? Asal de�il mi? bulan C++ Kodlar� :
 #include <iostream>
 using namespace std;
 int main () {
 	setlocale(LC_ALL,"Turkish");
	 int sayi;
	 int sayac=0;
 	cout<<"say� giriniz:"<<endl;
 	cin>>sayi;
 	
 	for(int j=2; j<sayi; j++)
     {
      if(sayi % j == 0)
         {
          sayac++;
          break;
         }
     }
  if(sayac == 0)
     {
      cout<<"ASALDIR."<<endl;
     }
 else
      cout<<"ASAL DEGILDIR."<<endl;
 }
 	
