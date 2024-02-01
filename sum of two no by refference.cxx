#include <iostream>
#include <conio.h>

int sum(int *n1, int *n2) {
    return (*n1 + *n2);
}

int main() {
    int n1 = 10, n2 = 20;
    int add;

    clrscr();

    add = sum(&n1, &n2);

    std::cout << "Addition of two numbers: " << add << std::endl;

    getch();

    return 0;
}