#include<stdio.h>
#include<string.h>
int main()
{
    char string1[100]="malayalam";
    char string2[100]="english";
    int length=0,length2=0,flag=0;
    for(int i=0;string1[i]!='\0';i++)
    {
        length++;
    }
    for(int i=0;string2[i]!='\0';i++)
    {
        length2++;
    }
    printf("%d",length);
    printf("\n%d",length2);
    if(length!=length2)
    {
      printf("\nstring is not equal");
        }
    else{

        for(int i=0;i<=length;i++)
        {
            if(string1[i]!=string2[i])
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0){
        printf("\nstrings are equal");
        }
    else{
        printf("\nstrings are not equal");
    }
    }
}

