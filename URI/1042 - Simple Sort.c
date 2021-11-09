#include<stdio.h>
void main()
{
    int i,j,temp,n[3],ar[3];
    scanf("%d%d%d",&n[0],&n[1],&n[2]);
    for(i=0; i<3; i++)
         ar[i] = n[i];
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(n[j]<n[i])
            {
                temp = n[j];
                n[j] = n[i];
                n[i] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n",n[0],n[1],n[2]);
    printf("\n%d\n%d\n%d\n",ar[0],ar[1],ar[2]);
}