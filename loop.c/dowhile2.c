#include<stdio.h>
int main()
{
    int i=1,number;
    printf("enter a number:");
    scanf("%d",&number);
    do
    {
        printf("%d*%d=%d\n",i,number,i*number);
        i++;
    } while
        (i<=10);

    
}