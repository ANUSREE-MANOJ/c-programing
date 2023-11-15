#include<stdio.h>
#include<string.h>
int main()
{
    int length1=0,length2=0,length3;
    char string1[]="anu";
    char string2[]="sree";
    for(int i=0;string1[i]!='\0';i++)
    {
      length1++;
    }
    printf("%d",length1);

 for(int i=0;string2[i]!='\0';i++,length1++)
 {
      string1[length1]=string2[i];
 }
  string1[length1]='\0';
 
 printf("\n%s",string1);
} 
