#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=2,n,j=3,flag=1;
    printf("enter a limit:");
    scanf("%d",&n);
    do
    {
       flag=1;
       j=2; 
    do
    {
        

        if(i%j==0)
        {
         flag=0;
        break;
        }
        
        
        j++;  
    } while (j<i);

     if(flag==1)
     {
 printf("%d\n",i);

     }
 
     i++;

    } while (i<=n);
    
}