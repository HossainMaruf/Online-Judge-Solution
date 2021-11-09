#include<stdio.h>
void main()
{
    int hour,speed;
    float fuel;
    scanf("%d%d",&hour,&speed);
    fuel=(hour*speed)/12.0;
    printf("%.3f\n",fuel);
}