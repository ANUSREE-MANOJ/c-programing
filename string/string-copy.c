#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="malayalam";
    char string2[100];
    int length=0;
   for(int i=0;string[i]!='\0';i++)
   {
    length++;
   }
   printf("%d",length);
   for(int i=0;i<=length;i++)
   {
    string2[i]=string[i];
   }
   printf("\n%s",string2);
}