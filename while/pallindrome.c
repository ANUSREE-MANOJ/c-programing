#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="malayalam";
    int i=0, flag=0;
    int length=strlen(arr);
    printf("%d",length);
    while(i!=length)
    {
        if(arr[i]!=arr[length-i-1])
        {
            flag=1;
            break;
        }
            i++;
            
        
        
    }
    if(flag==0)
    {
        printf("\nstring is pallindrome");
    }
    else{
     printf("\nstring is not pallindrome");

    }

}