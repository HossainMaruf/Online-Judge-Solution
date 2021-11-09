#include <iostream>

unsigned long long fact(int n) {
    if(n==0) return 1;
    return n * fact(n-1);
}

int main() {
   
   int num1, num2;
   while(std::cin >> num1 >> num2) {
        std::cout << fact(num1) + fact(num2) << std::endl;
   }

    return 0;
}