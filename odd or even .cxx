#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int no;
    clrscr(); 

    cout << "Enter the number: ";
    cin >> no;

    if (no % 2 == 0)
        cout << no << " is even" << endl;
    else
        cout << no << " is odd" << endl;

    getch(); 
    return 0;
}