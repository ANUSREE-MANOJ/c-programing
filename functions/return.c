#include<stdio.h>
int sum();
int main()
{
    int f;
 f=sum();
 printf("%d",f);
}
int sum()
{
    int a=10,b=20,c;
    c=a+b;
    return c;
}