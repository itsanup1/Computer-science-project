#include <iostream>

int main() {
    int n, original, rev = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    original = n;

    while (n != 0) {
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }

    if (original == rev)
        std::cout << "The number is a palindrome";
    else
        std::cout << "The number is not a palindrome";

    return 0;
}