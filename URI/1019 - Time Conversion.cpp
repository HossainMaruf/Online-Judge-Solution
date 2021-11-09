#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
     int n;
     cin >> n;
     int hour = n / 3600;
     int min = (n - (hour*3600))/60; 
     int sec = n - ((min * 60) + (hour * 3600));
     
     printf("%d:%d:%d\n",hour,min,sec);
 
    return 0;
}