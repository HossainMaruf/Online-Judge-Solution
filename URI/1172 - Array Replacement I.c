#include<stdio.h>
void main()
{
    int i,j,X[10];
    for(i=0; i<10; i++)
        scanf("%d",&X[i]);
        for(i=0; i<10; i++)
        {
            if(X[i]<=0)
                X[i] = 1;
            printf("X[%d] = %d\n",i,X[i]);
        }
}
