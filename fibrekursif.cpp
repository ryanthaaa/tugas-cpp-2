#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    system("color 4E");
    gotoxy(30, 5);
    cout << "<=== PROGRAM FIBONACCI REKURSIF ===>";
    
    gotoxy(30, 5 + 1);
    cout << "Masukkan panjang deret : ";
    cin >> n;

    gotoxy(30, 5 + 3);
    cout << "Hasil Deret:";
    
    gotoxy(30, 5 + 4);
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << (i < n - 1 ? ", " : "");
    }

    gotoxy(0, 5 + 7);
    cin.ignore();
    cin.get();
    return 0;
}