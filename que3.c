#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("ENTER value of n\n");
    scanf("%d",&n);
    for(i=1; i<=n*2; i=i+2)
    {
        sum=sum + i;

    }
     printf("%d",sum);
     return 0;
}