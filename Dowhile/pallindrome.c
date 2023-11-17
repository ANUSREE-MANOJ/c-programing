#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="malyalam";
    int i=0,flag=0;
    int length=strlen(arr);
    do
    {
        if(arr[i]!=arr[length-i-1])
        {
          flag=1;
          break;
        }
     
     i++;
    }while (arr[i]!='\0');
    
   if(flag==0)
    {
        printf("string is pallindrome");
    }
    else{
        printf("string is not pallindrome");
    }
    return 0;
}