#include<stdio.h>
void main()
{
    int i,j,N,X;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        int p = 1;
        scanf("%d",&X);
        for(j=2; j<X; j++)
        {
            if(X%j==0)
                p = 0;
        }
        if(p==0)
        printf("%d nao eh primo\n",X);
    else
        printf("%d eh primo\n",X);

    }
}