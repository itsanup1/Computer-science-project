#include <iostream>

int main() {
    int n, sum = 0, num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    n = num;

    while (num) {
        int rem = num % 10;
        sum = sum + (rem * rem);
        num = num / 10;
    }

    if (sum == n)
        std::cout << "The number is a magic number";
    else
        std::cout << "The number is not a magic number";

    return 0;
}