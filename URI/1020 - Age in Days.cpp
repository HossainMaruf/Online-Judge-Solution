#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
 
   unsigned int day;
   cin >> day;

   int years = day / 365;
   int next = day % 365;
   int months = next / 30;
   next = next % 30;
   int days = next;

   printf("%d ano(s)\n",years);
   printf("%d mes(es)\n",months);
   printf("%d dia(s)\n",days);

 
    return 0;
}