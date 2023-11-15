#include<stdio.h>
#include<string.h>
void rev(char string[],int length);
int main(){
    char string[100]="english";
    int length=strlen(string);
    printf("%d",length);
    rev(string,length);
  
}
 
 
 void rev(char string[],int length)
 {
    int i,j;
    char temp;
    for( i=0,j=length-1;i<j;i++,j--)
    {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
          

    }
    printf("\n%s",string);
}