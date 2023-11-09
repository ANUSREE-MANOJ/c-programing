#include<stdio.h>
int main()
{
    int n=5,k,m;
   for(int i=1;i<=n;i++)
   {
    for(int j=i;j<=n;j++)
    {
     printf(" ");
    }
   for(k=1;k<=i;k++)
   {
    printf("*");
   }
   for(m=1;m<i;m++)
   {
    printf("*");
   }

    printf("\n");
    }

}

