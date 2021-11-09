#include <iostream>
#include <stdio.h>

int main() {

    int hour1, min1, hour2, min2, hour, min;


   
    std::cin >> hour1 >> min1 >> hour2 >> min2;

    if(hour1 == hour2 && min2 > min1) {
        hour = 0;
        min = min2 - min1;
    }
    else {
        if(hour2 == hour1) hour = 24;
        else if(hour2 > hour1) hour = hour2 - hour1;
        else hour = 24 - hour1 + hour2;

        if(min2 >= min1) min = min2 - min1;
        else {
            min = 60 - min1 + min2;
            hour--;    
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);

    return 0;
}