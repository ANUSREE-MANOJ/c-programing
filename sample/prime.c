#include<stdio.h>
int main()
{
    int i,j,flag,n;
    printf("enter a limit:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}