#include<stdio.h>
int main()
{
    int string[]={1,2,3,4};
    int size;
    size=sizeof(string);
    printf("%d",size);
    int size2=sizeof(string[0]);
        printf("\n%d",size2);

}
