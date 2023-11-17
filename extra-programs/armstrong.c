#include<stdio.h>
int main()
{
    int n,r,sum=0,temp,i;
    
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    for(i=0;n!=0;i++){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;

    }
    if(temp==sum)
    {
        printf("armstrong number");
    }
    else{
        printf("not a armstrong number");
    }
    return 0;
}