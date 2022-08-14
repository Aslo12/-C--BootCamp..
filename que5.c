#include<stdio.h>
int main()
{
    int i,n,sum=0,cube=0;
    printf("ENTER value of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        cube=i*i* i;
        sum=sum+ cube;
    }
     printf("sum is %d ",sum);
     return 0;
}