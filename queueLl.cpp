#include <iostream>
#include <windows.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }

};

Node* first = NULL;
Node* last = NULL;

void tambahQueue(int value) {
    Node* newNode = new Node(value);

    if (last == NULL) {
        first = last = newNode;
    } else {
        last->next = newNode;
        last = newNode;   
    }

    system("color 4E");
    cout << value << " masuk ke Queue." << endl;
}

void hapusQueue() {

    system("color 4E");
    if (first == NULL) {
        cout << "Queue Kosong!" << endl;
        return;
    }
    Node* temp = first;
    first = first->next; 
    if (first == NULL) last = NULL;


    cout << temp->data << " keluar dari Queue." << endl;
    delete temp;
}

void tampil() {

    system("color 4E");

    Node* temp = first;
    cout << "Isi Queue : " << endl;

    while (temp) {
        cout << temp->data << " <- ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int pil, data;

    system("color 4E");
    do {

        cout << endl;
        cout << "1. Tambah" << endl; 
        cout << "2. Hapus" << endl;
        cout << "3. Tampil" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih : "; 
        cin >> pil;

        if (pil == 1) {
            cout << "Data : ";
            cin >> data;

            tambahQueue(data);
        } else if (pil == 2) {
            hapusQueue();
        }else if (pil == 3) {
            tampil();
        }else if (pil == 0) {
            break;
        }else {
            cout << "Baca dong pilihannya..." << endl;
        }

    } while (pil != 0);

    cin.get();
    cin.ignore();
    return 0;
}