#include<stdio.h>
#include<string.h>
int main()
{
    char string[]="javapoint with c and java";
    char *sub;
    sub=strstr(string,"c");
    printf("substring is:%s",sub);
    return 0;
}