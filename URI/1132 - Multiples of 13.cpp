#include <iostream>

int main() {

    int num1, num2;
    long long sum = 0;
    std::cin >> num1 >> num2;

    if(num1 > num2) std::swap(num1,num2);

    for(int i=num1; i<=num2; i++) {
        if(i % 13 != 0) sum += i;
    }

    std::cout << sum << std::endl;
    
    return 0;
}