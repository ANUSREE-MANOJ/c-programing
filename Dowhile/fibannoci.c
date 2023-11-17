#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,n,fib1=1,fib2=1,m=0;
    printf("enter a limit:");
    scanf("%d",&n);
    do
    {
        
        printf("%d\n",m);
        fib2=fib1;
        fib1=m;
     m=fib1+fib2;
     i++;
    } while (i<=n);
    return 0;
}

/*
0
1
1
2
3
5
8




*/