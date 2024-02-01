#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    int a, b, c;
    float r, s;

    clrscr(); 

    cout << "Enter values for a, b, and c: ";
    cin >> a >> b >> c;

    r = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    s = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots for Quadratic equation are " << r << " and " << s << endl;

    getch(); 
    return 0;
}