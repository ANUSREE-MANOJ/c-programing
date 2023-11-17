#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,rev,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    int temp=num;
    do
    {
        rev=num%10;
        sum=sum+(rev*rev*rev);
        num=num/10;
        
    } while (num!=0);
    
    if(temp==sum)
    {
        printf("number is armstrong number");
    }
    else{
        printf("number is not armstrong number");
    }
    return 0;
}