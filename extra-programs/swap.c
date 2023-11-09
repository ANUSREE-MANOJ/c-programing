#include<stdio.h>
int main()
{
   int a,b; 
   printf("enter 2 numbers:");
   scanf("%d%d",&a,&b);
   a = a + b;
    b = a - b;
    a = a - b;

printf("%d,%d",a,b);

}
/*
a=10
b=20

*/