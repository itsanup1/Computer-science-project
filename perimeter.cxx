#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int l, b, a, p; 
    clrscr(); 

    cout << "Enter value for length and breadth: "; 
    cin >> l >> b; 

    a = l * b; 
    p = 2 * (l + b); 

    cout << "Area of rectangle is " << a << endl; 
    cout << "Perimeter of rectangle is " << p << endl; 

    getch(); 
    return 0;
}