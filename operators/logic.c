#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("\n%d",(a>2&&b>10));
    printf("\n%d",(a>2||b>10));
    printf("\n%d",!(a>2&&b>10));
}
