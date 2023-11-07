#include<stdio.h>
int sum();
int main()
{
    int a=10,b=20;
    sum(a,b);
}
int sum(int x,int y)
{
    int c;
    c=x+y;
    printf("%d",c);
}