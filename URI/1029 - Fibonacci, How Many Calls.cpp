#include <iostream>
#include <stdio.h>

typedef long long int lli;

static int count;

inline lli fib(int n) {
    count++;
    if(n <= 1) return n;
    else return fib(n-1) + fib(n-2);
}

int main() {

    int t, n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        printf("fib(%d) = %d calls = %lld\n",n,count-1,fib(n));
        count = 0;
    }
    return 0;
}