#include <iostream>

using namespace std;

int main() {
    int n, fact = 1;

    cout << "Enter a number for factorial: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of given number: " << fact << endl;

    return 0;
}