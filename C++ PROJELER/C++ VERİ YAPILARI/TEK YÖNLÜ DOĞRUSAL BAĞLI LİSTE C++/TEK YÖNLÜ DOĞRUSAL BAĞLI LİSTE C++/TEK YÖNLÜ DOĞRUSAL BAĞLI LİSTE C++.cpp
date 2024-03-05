#include <iostream>
using namespace std;


struct node {
	int data;
	struct node* next;
};

struct node* basaEkle(struct node* head, int key)
{
	if (head == NULL)
	{
		struct node* temp = new node();
		temp->data = key;
		temp->next = NULL;

		head = temp;
		cout << "ilk dügüm olusturluldu " << endl;

	}
	else
	{
		struct node* temp = new node();
		temp->data = key;
		temp->next = head;

		head = temp;
		cout << "dugum ekleme islemi gerceklestirildi" << endl;

	}
	return head;
}

struct node* sonaEkle(struct node* head, int key)
{
	if (head == NULL)
	{
		struct node* temp = new node();
		temp->data = key;
		temp->next = NULL;

		head = temp;
		cout << "ilk dügüm olusturluldu " << endl;

	}
	else
	{
		struct node* temp = new node();
		temp->data = key;
		temp->next = NULL;

		struct node* temp2 = head;
		while (temp->next != NULL)
			temp = temp2->next;

		temp2->next = temp;
		cout << "listenin sonuna eleman eklendi" << endl;

	}
	return head;
}

void verileriYazdır(struct node* head)
{
	system("cls"); //sayfayı temizler
	if (head == NULL)
	{
		cout << "liste boş" << endl;
	}
	else
	{
		int i = 1;
			struct node* temp = head;
			while (temp != NULL)
			{
				cout << temp->data <<  endl;
				temp = temp->next;
		}
	}
}
void tumBilgileriYazdir(struct node* head)
{
	system("cls"); //sayfayı temizler
	if (head == NULL)
	{
		cout << "liste boş" << endl;
	}
	else
	{
		int i = 1;
		struct node* temp = head;
		while (temp != NULL)
		{
			cout << i << ".düğümün datası: " << temp->data << "adresi" << temp << "bir sonraki düğümün adresi" << endl;
			temp = temp->next;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Turkish");

	struct node* head = NULL;
	int sayi, secim;

	while (1)
	{
		cout << endl;
		cout << "tek yönlü doğrusal bağlı liste uygulaması: " << endl;
		cout << "1--basa eleman ekle : " << endl;
		cout << "2--sona eleman ekle: " << endl;
		cout << "3--verileri yaz: " << endl;
		cout << "4--listenin tüm bilgilerini yazdır : " << endl;
		cout << "5--ÇIKIŞ: " << endl;

		cin >> secim;

		switch (secim)
		{
		case 1:cout << "basa eklenecek sayıyı girin: " << endl;
			cin >> sayi;
			head = basaEkle(head, sayi);
		    break;

		case 2:cout << "sona eklenecek sayıyı girin: " << endl;
			cin >> sayi;
			head = sonaEkle(head, sayi);
			break;
        
		case 3:verileriYazdır(head);
			break;
         
		case 4:tumBilgileriYazdir(head);

			break;

		case 5:cout << "çıkış yapıldı: " << endl;
			return 0;

			
		}

		
	}
	


}