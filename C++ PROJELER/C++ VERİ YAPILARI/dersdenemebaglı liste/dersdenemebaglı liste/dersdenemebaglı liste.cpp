#include <iostream>


// Bağlı liste düğüm yapısı
struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    // Veriyi listeye ekleme
    void addData(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        std::cout << data << " listeye eklendi." << std::endl;
    }

    // Veriyi listeden çıkarma
    void removeData(int data) {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            if (current->data == data) {
                if (prev != nullptr) {
                    prev->next = current->next;
                }
                else {
                    head = current->next;
                }
                delete current;
                std::cout << data << " listeden çıkarıldı." << std::endl;
                return;
            }
            prev = current;
            current = current->next;
        }
        std::cout << data << " listede bulunamadı." << std::endl;
    }

    // Listeyi görüntüleme
    void displayList() {
        Node* current = head;
        std::cout << "Liste: ";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

private:
    Node* head;
};

int main() {
    setlocale(LC_ALL, "Turkish");
    LinkedList list;
    int choice, data;

    do {
        std::cout << "Bağlı Liste Programı" << std::endl;
        std::cout << "1. Veri Ekle" << std::endl;
        std::cout << "2. Veri Çıkar" << std::endl;
        std::cout << "3. Liste Görüntüle" << std::endl;
        std::cout << "4. Çıkış" << std::endl;
        std::cout << "Seçiminizi yapın: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Eklemek istediğiniz veriyi girin: ";
            std::cin >> data;
            list.addData(data);
            break;
        case 2:
            std::cout << "Çıkarmak istediğiniz veriyi girin: ";
            std::cin >> data;
            list.removeData(data);
            break;
        case 3:
            list.displayList();
            break;
        case 4:
            std::cout << "Programdan çıkılıyor." << std::endl;
            break;
        default:
            std::cout << "Geçersiz seçenek. Tekrar deneyin." << std::endl;
        }
    } while (choice != 4);

    return 0;
}