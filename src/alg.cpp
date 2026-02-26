#include <iostream>
#include "alg.h"
int gcd(int a, int b) {
    while (b != 0) {
        int i = b;
        b = a % b;
        a = i;
    }
    return a;
}

int main() {
    std::cout << gcd(10, 15) << std::endl;
    return 0;
}
