#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n, i, fact = 0;

    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            fact++;
        }
    }

    if (fact == 2) {
        cout << "Number is prime" << endl;
    } else {
        cout << "Number is not prime" << endl;
    }

    getch();

    return 0;
}