#include <iostream>
using namespace std;

//--------- STRUCT YAPISI OLSTURMA------------

struct node
{
    int data;
    struct node* next;
};

//-------  LISTENIN BASINA DEGER EKLEME FONKSIYONU

struct node* BasaEkle(struct node* head, int data)
{
    if (head == NULL)
    {
        struct node* temp = new node();
        temp->data = data;
        temp->next = NULL;
        head = temp;
        cout << "ilk " << data << " degeri listeye eklendi + " << endl << endl;
    }
    else
    {
        struct node* temp = new node();
        temp->data = data;
        temp->next = head;
        head = temp;
        cout << data << " degeri listenin basina eklendi+ " << endl << endl;
    }
    return head;
};
//LISTENIN SONUNA DEGER EKLEME FONKSIYONU
struct node* SonaEkle(struct node* head, int data)
{
    if (head == NULL)
    {
        struct node* temp = new node();
        temp->data = data;
        temp->next = NULL;
        head = temp;
        cout << "ilk " << data << " degeri listeye eklendi+  " << endl << endl;
    }
    else
    {
        struct node* temp = new node();
        temp->data = data;
        struct node* temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
        cout << data << " degeri listenin sonuna eklendi + " << endl << endl;
    }
    return head;
 
   

};

//LISTENIN ISTEDIGIMIZ YERINE DEGER EKLEME FONKSIYONU

struct node* istediginEkle(struct node* head, int data, int satir)
{
    if (head == NULL)
    {
        cout << "liste bos " << endl << endl;
    }
    else
    {
        struct node* temp = head;
        int satir_sayi = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            satir_sayi = satir_sayi + 1;
        }
        if (satir < 0)
        {
            cout << "Lütfen geçerli deger girin " << endl << endl;
        }
        else if (satir == 0)
        {
            head = BasaEkle(head, data);
        }
        else if (satir == satir_sayi)
        {
            head = SonaEkle(head, data);
        }
        else if (satir > satir_sayi)
        {
            cout << "Listede o kadar deger bulunmamaktadir " << endl << endl;
        }
        else
        {
            struct node* temp = head;
            struct node* temp2 = new node();
            temp2->data = data;
            int i = 1;
            while (i < satir)
            {
                temp = temp->next;
                i++;
            }
            temp2->next = temp->next;
            temp->next = temp2;
            cout << satir << ". satirindan sonraki satira " << data << " degeri eklendi + " << endl << endl;
        }
        return head;
    }
};

///FONKSIONUN BASINDAKI DEGERI SILEN FONKSIYON
struct node* BasiSil(struct node* head)
{
    if (head == NULL)
    {
        cout << "Liste bos " << endl << endl;
    }
    else
    {
        if (head->next == NULL)
        {
            cout << "Listenin " << head->data << " bastaki degeri silindi -" << endl;
            head = NULL;
        }
        else
        {
            cout << head->data << " degeri listenin basindan silindi -" << endl << endl;
            struct node* temp = head;
            head = head->next;
            temp->next = NULL;
        }
    }
    return head;
};

//LISTENIN SONUNDAKI DEGERI SILEN FONKSIYON

struct node* SonuSil(struct node* head)
{
    if (head == NULL)
    {
        cout << "Liste bos " << endl << endl;
    }
    else
    {
        if (head->next == NULL)
        {
            cout << "Listenin basdaki " << head->data << " degeri silindi -" << endl;
            head = NULL;
        }
        else if (head->next->next == NULL)
        {
            cout << head->next->data << " degeri listenin sonundan silindi - " << endl << endl;
            head->next = NULL;
        }
        else
        {
            struct node* temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            cout << temp->next->data << " degeri listenin sonundan silindi -" << endl << endl;
            temp->next = NULL;
        }
    }
    return head;
};

//LISTENIN ISTEDIGIN YERINDEKI DEGERI SILEN FONKSIYON
struct node* istediginiSil(struct node* head, int satir)
{
    if (head == NULL)
    {
        cout << "Liste bos " << endl << endl;
    }
    else
    {
        struct node* temp = head;
        int satir_sayi = 0;

        while (temp != NULL)
        {
            temp = temp->next;
            satir_sayi = satir_sayi + 1;
        }
        if (satir < 0)
        {
            cout << "Lütfen gecerli deger girin " << endl << endl;
        }
        else if (satir == 0)
        {
            head = BasiSil(head);
        }
        else if (satir_sayi == satir)
        {
            head = SonuSil(head);
        }
        else
        {
            struct node* temp = head;
            int i = 2;
            while (i < satir)
            {
                temp = temp->next;
                i++;
            }
            cout << temp->next->data << " degeri " << i + 1 << " . satirdan silindi +" << endl << endl;
            temp->next = temp->next->next;

        }
    }
    return head;
};
//LISTEDEKI ELEMANLARI YAZDIRAN FONKSIYON

void ElemanlariYazdir(struct node* head)
{
    if (head == NULL)
    {
        cout << "Liste bos  " << endl;
    }
    else
    {
        struct node* temp = head;
        int i = 1;
        while (temp != NULL)
        {
            cout <<"X   " << i << ". Eleman = " << temp->data << endl;
            temp = temp->next;
            i++;
        }
    }
    cout << endl;
}
//LISTEDE ELEMAN ARAYAN FONKSIYON
void ElemanAra(struct node* head, int sayi)
{
    if (head == NULL)
    {
        cout << "Liste bos " << endl;
    }
    else
    {
        struct node* temp = head;
        int i = 1;
        while (temp != NULL)
        {
            if (sayi == temp->data)
            {
                cout << "Listenin " << i << ". satirinda " << sayi << " degeri var" << endl;
            }
            temp = temp->next;
            i++;

        }
        cout << endl;
    }
}
//MAİN 
int main()
{
    struct node* head = new node();
    head = NULL;
    int sayi;
    int secim = 0;

    while (secim != 9)
    {
    a:
        cout << "--------------------TEK YONLU DOGRUSAL BAGLI LISTE UYGULAMASI--------------------" << endl;
        cout << "X                                                                               X" << endl;
        cout << "X                      MENU:                                                    X" << endl;
        cout << "X                                                                               X" << endl;
        cout << "X                       EKLEME ISLEMLERI                                        X" << endl;
        cout << "X                         1-) Listenin basina deger ekleme                      X" << endl;
        cout << "X                         2-) Listenin sonuna deger ekleme                      X" << endl;
        cout << "X                         3-) Listenin istenilen yerine deger ekleme            X" << endl;
        cout << "X                                                                               X" << endl;
        cout << "X                        SILME ISLEMLERI                                        X" << endl;
        cout << "X                         4-) Listenin basindan deger silme                     X" << endl;
        cout << "X                         5-) Listenin sonundan deger silme                     X" << endl;
        cout << "X                         6-) Listenin istenilen yerinden deger silme           X" << endl;


        cout << "X                                                                               X" << endl;
        cout << "X                        DIGER ISLEMLERI                                        X" << endl;
        cout << "X                         7-) Listedeki degerleri ekrana yazdirma               X" << endl;
        cout << "X                         8-) Listede deger arama                               X" << endl;
        cout << "X                                                                               X" << endl;
        cout << "X                         9-) Cikis                                             x" << endl;
        cout << "X                                                                               X" << endl;
        cout << "X                                                                               X" << endl;
        cout << "---------------------------------------------------------------------------------" << endl << endl << endl;
        cout << "-------------------------------------" << endl << endl;
        cout << "X         Seciminizi girin : ";
                           cin >> secim;
        cout << "-------------------------------------" << endl << endl;

        system("cls");
      
        //1-) listenin basina deger ekleme kodu
        if (secim == 1)
        {
            cout << "-> Listenin basina ekleyeceginiz degeri girin : ";
            cin >> sayi;
            cout << endl;
            head = BasaEkle(head, sayi);
        }

        
         //2-) listenin sonuna deger ekleme kodu
        else if (secim == 2)
        {
            cout << "-> Listenin sonuna ekleyeceginiz degeri girin : ";
            cin >> sayi;
            cout << endl;
            head = SonaEkle(head, sayi);
        }

        
       //3-)listenin istedigimiz satirina deger girdirme kodu
        else if (secim == 3)
        {
            ElemanlariYazdir(head);
            int satir;
            cout << "-> Listenin hangi satirindan sonra deger ekleyeceginizi girin : ";
            cin >> satir;
            cout << endl;
            cout << "-> Listeye ekleyeceginiz degeri girin : ";
            cin >> sayi;
            cout << endl;
            head = istediginEkle(head, sayi, satir);
        }

        
        //4-) listenin basindaki elemani sildirme kodu
        else if (secim == 4)
        {
            head = BasiSil(head);
        }

        
        //5-) listenin sonundaki elemani silme kodu
        else if (secim == 5)
        {
            head = SonuSil(head);
        }

        
        //6-) listedeki istedigimiz satiri silme kodu
        else if (secim == 6)
        {
            ElemanlariYazdir(head);
            cout << "-> Listenin hangi satirini sileceginizi girin : ";
            cin >> sayi;
            cout << endl;
            head = istediginiSil(head, sayi);
        }

        
        //7-) listenin tum elemanlarini yazdirma kodu
        else if (secim == 7)
        {
            cout << "--------LISTE--------" << endl ;
            ElemanlariYazdir(head);
            cout << "---------------------" << endl << endl;

        }

        
        //8-) listede deger arama kodu
        else if (secim == 8)
        {
            cout << "Listede aranacak degeri girin : ";
            cin >> sayi;
            cout << endl;
            ElemanAra(head, sayi);
        }

        
      
        else if (secim != 9)
        {
            cout << "Yanlis bir secim yaptiniz lütfen tekrar deneyin" << endl << endl;
            goto a;
        }

        

    }
    
}


