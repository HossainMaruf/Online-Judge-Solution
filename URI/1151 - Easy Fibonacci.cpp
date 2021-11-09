// #include <iostream>

// typedef unsigned long long int lli;

// static int count;

// lli memo[200];

// inline lli fib(int n) {
//     if(n <= 1) return n;
//     if(memo[n] != 0) {
//         count++;
//         return memo[n];
//     } else {
//         count += 2;
//         return memo[n] = fib(n-1) + fib(n-2);

//     }
// }

// int main() {

//     int t, n;
//     // std::cin >> t;
//     // while(t--) {
//     //     std::cin >> n;
//     //     printf("fib(%d) = %d calls = %lld\n",n,count-1,fib(n));
//     //     count = 0;
//     // }
//     std::cout << fib(100) << std::endl;
//     return 0;
// }

#include <iostream>


int main() {

    int n;
    long long int a=0, b=1, temp;
    std::cin >> n;

    std::cout << a <<" "<< b << " ";

    for(int i=3; i<=n; i++) {
        temp = a+b;
        if(i != n)
            std::cout << temp << " ";
        else std::cout << temp;
        a = b;
        b = temp;

    }
    std::cout << "\n";

    return 0;
}