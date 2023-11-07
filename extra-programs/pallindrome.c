#include<stdio.h>
int main()
{
    int num,revise=0,remainder,temp;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
   while(num!=0)
   {
   remainder=num%10;
   revise=(revise*10)+remainder;
   num=num/10;

   }
     if(temp==revise) 
     {
        printf("number is pallindrome");
     }
     else{
        printf("number is not pallindrome");
     }
   }


/*
121
*/