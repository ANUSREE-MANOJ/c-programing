#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fib1=0,fib2=1,n,i=1,m=0,z=0;
    printf("enter a limit:");
    scanf("%d",&n);
    
    while ( i<=n)
    {
    printf("\n%d",m);
    fib1=fib2;
    fib2=m;
    m=fib1+fib2;
    

        i++;
    }
    return 0;

}

