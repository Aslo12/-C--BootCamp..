#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("ENTER value of n\n");
    scanf("%d",&n);
   while(n!=0)
   {
    n=n/10;
    count++;
   }
   printf("Number of digit is %d",count);
     return 0;
}