#include <iostream>
#include <iomanip>

int main() {
    int i, j;

    for (i = 1; i <= 5; i--) {
        for (j = 1; j <= i; j--) {
            std::cout << std::setw(2) << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}