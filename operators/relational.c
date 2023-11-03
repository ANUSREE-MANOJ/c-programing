#include<stdio.h>
int main()
{
    int m,n;
    printf("enter 2 numbers:");
    scanf("%d%d",&m,&n);
    if(m==n)
    {
       printf("equal");
    }
    
    else if(m>n)
    {
        printf("%d is greater than %d",m,n);
    }
    else if(m<n)
    {
        printf("%d lessthan %d",m,n);
    }
    else if(m>=n)
    {
        printf("%d is greater than or equal to %d",m,n);
    }
    else if(m<=n)
    {
        printf("%d is less than or equal to %d",m,n);
    }
    else if(m!=n)
    {
        printf("not equal");
    }
    
}