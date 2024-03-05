#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
    struct node* prew;
};

struct node* head = NULL;

void basaEkle(int key)
{
    struct node* eleman = new node();
    eleman->data = key;
    if (head == NULL)
    {
        head = eleman;
        head->next = NULL;
        head->prew = NULL;
        cout << "ilk eleman eklendi" << endl;

    }
    else
    {
        eleman->next = head;
        head->prew = eleman;
        head = eleman;
        cout << "basa eleman eklendi" << endl;


    }

}
void sonaEkle(int key)
{
    struct node* eleman = new node();
    eleman->data = key;
    if (head == NULL)
    {
        head = eleman;
        head->next = NULL;
        head->prew = NULL;
        cout << "ilk eleman eklendi" << endl;

    }
    else
    {
        struct node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = eleman;
        eleman->prew = temp;
        eleman->next = NULL;
        cout << "sona eleman eklendi" << endl;


    }

}
int main()
{
    std::cout << "Hello World!\n";
}
