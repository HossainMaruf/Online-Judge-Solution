#include<stdio.h>
void main()
{
    int i,count=0;
    float ar[6];
    for(i=0; i<6; i++)
    {
         scanf("%f",&ar[i]);
        if(ar[i]>0)
            count++;
    }
    printf("%d valores positivos\n",count);
}