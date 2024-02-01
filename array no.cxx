#include <iostream>
#include <conio.h>

int main() {
    int a[10], i;

    clrscr();

    std::cout << "Enter array elements: ";
    for (i = 0; i <= 9; i++) {
        std::cin >> a[i];
    }

    std::cout << "Array elements are: ";
    for (i = 0; i <= 9; i++) {
        std::cout << a[i] << " ";
    }

    getch();

    return 0;
}
