#include <iostream>

long int factorial(int);

int main() {
    int n;
    long int fact = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "Factorial of given number: " << factorial(n);

    return 0;
}

long int factorial(int n) {
    long int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}