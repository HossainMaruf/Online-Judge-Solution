#include <iostream>
#include <math.h>

#define PI 3.1415

int main() {

    long long r, gas;
    std::cin >> r >> gas;

    double volume = (4.00/3.00)*PI*pow(r,3);
    
    std::cout << floor(gas / volume) << std::endl;

    return 0;
}