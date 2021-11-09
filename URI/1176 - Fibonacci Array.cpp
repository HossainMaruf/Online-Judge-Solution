#include <iostream>
#include <stdio.h>

typedef unsigned long long int lli;

lli memo[65];

inline lli fib(int n) {
    if(n < 2) return n;
    if(memo[n] != 0) return memo[n];
    else return memo[n] = fib(n-1) + fib(n-2);
}

int main() { 

    int t,n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        printf("Fib(%d) = %lld\n",n,fib(n));
    }

    return 0;
}