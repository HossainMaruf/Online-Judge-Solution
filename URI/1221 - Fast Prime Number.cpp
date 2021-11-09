#include <iostream>
#include <math.h>

bool isPrime(unsigned long long int n) {
    if(n == 2 || n == 3) return true;
    else {
        int root = sqrt(n);
        for(int i=2; i<=root; i++) {
           if(n%i == 0) return false;
        }
    }
    return true;
}

int main() {

    int t;
    unsigned long long int n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        if(isPrime(n)) std::cout << "Prime" << std::endl;
        else std::cout << "Not Prime" << std::endl;
    }

    return 0;
}