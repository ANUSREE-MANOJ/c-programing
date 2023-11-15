#include<stdio.h>
#include<String.h>
int main()
{
    char string[]="anusree";
    int length=0;
    for(int i=0;string[i]!='\0';i++)
    {
       length++;
    }
    printf("%d",length);
}