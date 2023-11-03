#include<stdio.h>
int main()
{
    int a=20,b=10,c,n;
    printf(" 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division \n 5 for module \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        c=a+b;
        printf("%d",c);
        break;
    case 2:
        c=a-b;
        printf("%d",c);
        break;
        case 3:
        c=a*b;
        printf("%d",c);
        break;
        case 4:
        c=a/b;
        printf("%d",c);
        break;
        case 5:
        c=a%b;
        printf("%d",c);
        break;
    default :
       printf("error");
        break;
    }
}