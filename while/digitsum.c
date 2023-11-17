#include<stdio.h>
int main()
{
    int n,rev,temp,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
       rev=n%10;
       sum=sum+rev;
       n=n/10;
    }
    printf("sum is:%d",sum);
    return 0;
}