#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int r;
    float a, c; 
    clrscr(); 

    cout << "Enter value for radius: ";
    cin >> r;

    a = 3.14 * r * r; 
    c = 2 * 3.14 * r; 

    cout << "Area of circle is = " << a << endl; 
    cout << "Circumference of circle is " << c << endl; 

    getch(); 
    return 0;
}
