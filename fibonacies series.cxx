#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n, f1 = 1, f2 = 1, f;

    clrscr();

    cout << "Enter how many terms: ";
    cin >> n;

    cout << f1 << endl;
    cout << f2 << endl;

    for (int i = 1; i <= n - 2; i++) {
        f = f1 + f2;
        cout << f << endl;
        f1 = f2;
        f2 = f;
    }

    getch();

    return 0;
}