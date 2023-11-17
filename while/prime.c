#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=2,j=2,flag,count;
    printf("enter a limit:");
    scanf("%d",&n);
    while (i<=n)
    {
        
        flag=1;
        while (j<i)
        {
            if(i%j==0)
            {
             flag=0;
             break;
              
            }
            j++;
        }
           
       
     
      if(flag==1)
    {
        printf("\n%d",i);
    }
    i++;
    j=2;
    }
 
}