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

Node* top = NULL;

void tambahStack(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;  

    system("color 4E");
    cout << value << " masuk ke Stack.\n";
}

void hapusStack() {
    system("color 4E");

    if (top == NULL) {
        cout << "Stack Kosong!\n";
        return;
    }
    Node* temp = top;
    top = top->next;

    cout << temp->data << " dihapus dari Stack.\n";
    delete temp;
}

void tampil() {
    Node* temp = top;

    system("color 4E");
    cout << "Isi Stack: ";
    while (temp) {
        cout << endl;
        cout << "  v " << endl;
        cout << "  " << temp->data;
        temp = temp->next;
    }
    
}

int main() {
    int pil, data;

    system("color 4E");

    do {
        cout << endl;

        cout << "1. Tambah" << endl;
        cout << "2. Hapus" << endl;
        cout << "3. Tampil" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih : "; 
        cin >> pil;

        if (pil == 1) {
            cout << "Data : ";
            cin >> data;

            tambahStack(data);

        } else if (pil == 2) {
            hapusStack();
        } else if (pil == 3) {
            tampil();
        }else if (pil == 4) {
            break;
        }

    } while (pil != 0);

    cin.get();
    cin.ignore();

    return 0;
}