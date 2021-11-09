#include <iostream>
#include <math.h>

int main() {

    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    if((num1 > num2) && (num3 >= num2)) std::cout << ":)\n";
    else if((num2 > num1) && (num3 <= num2)) std::cout << ":(\n";
    else if((num2 > num1) && (num3 > num2)) {
        if(abs(num3 - num2) < abs(num2 - num1)) std::cout << ":(\n";
        else std::cout << ":)\n";
    }else if((num2 < num1) && (num3 < num2)) {
        if(abs(num2 - num3) < abs(num1 - num2)) std::cout << ":)\n";
        else std::cout << ":(\n";
    } else if(num1 == num2) {
        if(num3 > num2) std::cout << ":)\n";
        else std::cout << ":(\n";
    }
    
    return 0;
}