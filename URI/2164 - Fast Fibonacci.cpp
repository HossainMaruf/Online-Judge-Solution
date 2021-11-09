#include <iostream>
#include <iomanip>
#include <math.h>

#define P_PHI (1+sqrt(5))/2
#define N_PHI (1-sqrt(5))/2

typedef  double d;

inline d fib(int n) {
    return round((pow(P_PHI,n) - pow(N_PHI,n))/sqrt(5));
}


int main() {

    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(1) << fib(n) << std::endl;

    return 0;
}