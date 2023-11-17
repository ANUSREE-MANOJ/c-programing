#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,fact=1;
    printf("enter a limit:");
    scanf("%d",&n);
   while (n!=0)
   {
    fact=fact*n;
    n--;
   }
   printf("%d",fact);
}