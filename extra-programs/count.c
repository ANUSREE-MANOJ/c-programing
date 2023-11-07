#include<stdio.h>
int main()
{
    int n,i,count=0,m;
    printf("enter a numbers:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        
        count++;
    }
    printf("count is:%d",count);

    return 0;
}

