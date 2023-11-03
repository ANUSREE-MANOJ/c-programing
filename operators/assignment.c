#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    printf(" 1 for add Assignment \n 2 for subtract Assignment \n 3 for multiple Assignment \n 4 for division Assignment \n 5 for module Assignment ");
    scanf("%d",&c);
    switch (c)
    {
        case 1:
         a +=b;
        printf("%d",a);
        break;
        case 2:
         a-=b;
        printf("%d",a);
        break;
        case 3:
         a*=b;
        printf("%d",a);
        break;
        case 4:
         a/=b;
        printf("%d",a);
        break;
        case 5:
         a%=b;
        printf("%d",a);
        break;
    
    default:
     printf("error");
        break;
    }
   
}