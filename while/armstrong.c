#include<stdio.h>
int main()
{
    int num,i,temp,rev,s=0;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
      rev=num%10;
      s=s+(rev*rev*rev);
      num=num/10;
      
    }
    if(temp==s)
    {
        printf("number is armstrong number");
    }
    else{
         printf("number is not armstrong number");

    }
    
}