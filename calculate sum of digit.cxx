#include <iostream>
#include <conio.h>

int main() {
    int n, rem, sum = 0;

    clrscr();

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (n != 0) {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    std::cout << "Sum of digits: " << sum;

    getch();

    return 0;
}