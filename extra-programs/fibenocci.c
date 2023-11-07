#include<stdio.h>
int main()
{
    int flag=0,flag1=1,m,n,i;
    printf("enter a limit:");
    scanf("%d",&n);
    printf("%d\n",flag);
    printf("%d\n",flag1);
    for(i=1;i<=n;i++)
    {
        m=flag+flag1;
        printf("%d\n",m);
        flag=flag1;
        flag1=m;
        
    }
}



/*
0
1
1         a=0 b=1 a+b
2
3
5
8*/