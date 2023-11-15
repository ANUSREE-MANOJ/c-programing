#include<stdio.h>
#include<string.h>
void rev(char string[],int length);
int main(){
    char string[100]="hindi";
    char string2[100];
    int length=strlen(string);
    strcpy(string2,string);
    printf("\n%s",string);
    printf("\n%d",length);
    rev(string,length);
    
    if (strcmp(string, string2) == 0) {
        printf("\nString is a palindrome");
    } else {
        printf("\nStrings are not palindrome");
    }


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