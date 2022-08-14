#include<stdio.h>
int main()
{
    int i,n,sum=0,square=0;
    printf("ENTER value of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       square= i * i;
        sum=sum + square;

    }
     printf("%d",sum);
     return 0;
}