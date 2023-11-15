#include<stdio.h>
#include<string.h>
int main()
{
    char string[200];
    int flag=0;
    printf("enter a string:");
    scanf("%s",string);
    printf("\nenterded string %s",string);
     int l=strlen(string);
     printf("\n%d",l);
     for(int i=0;i<l;i++)
     {
       if(string[i]!=string[l-i-1])
       {
            flag=1;
            break;
       }
     }
     if(flag==0){
        printf("\nstring is pallindrome");
     }
     else{
        printf("\nstring is not pallindrome");
     }
}