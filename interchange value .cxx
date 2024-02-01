#include <iostream>
#include <conio.h>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    clrscr();

    std::cout << "Enter values for a and b: ";
    std::cin >> a >> b;

    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;

    swap(a, b);

    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    getch();

    return 0;
}