#include <iostream>
#include <math.h>

int main() {
    
    long long int num1, num2;
    while(std::cin >> num1 >> num2) {
        std::cout << abs(num1 - num2) << std::endl;
    }

    return 0;
}