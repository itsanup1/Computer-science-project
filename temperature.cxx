#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    float f, c;
    clrscr(); /

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;

    c = (f - 32) * 5.0 / 9.0; 

    cout << "Temperature in Celsius: " << c << endl; 

    getch(); 
    return 0;
}