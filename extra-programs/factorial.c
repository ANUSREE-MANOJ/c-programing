#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter a anumber:");
    scanf("%d",&n);
    for(i=n;i!=0;i--)
    {
       
       fact=fact*i;
    
    }
    printf("factorial of %d:%d",n,fact);
}