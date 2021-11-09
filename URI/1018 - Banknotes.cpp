#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
    unsigned int tk;
    cin >> tk;

    int next;

    int tk_100 = tk / 100;
    next = tk  % 100;
    int tk_50 = next / 50;
    next = next % 50;
    int tk_20 = next / 20;
    next = next % 20;
    int tk_10 = next / 10;
    next = next % 10;
    int tk_5 = next / 5;
    next = next % 5;
    int tk_2 = next / 2;
    next = next % 2;
    int tk_1 = next;

    printf("%u\n",tk);
    printf("%d nota(s) de R$ 100,00\n",tk_100);
    printf("%d nota(s) de R$ 50,00\n",tk_50);
    printf("%d nota(s) de R$ 20,00\n",tk_20);
    printf("%d nota(s) de R$ 10,00\n",tk_10);
    printf("%d nota(s) de R$ 5,00\n",tk_5);
    printf("%d nota(s) de R$ 2,00\n",tk_2);
    printf("%d nota(s) de R$ 1,00\n",tk_1);

 
    return 0;
}