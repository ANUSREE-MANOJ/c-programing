#include<stdio.h>
int main()
{
    int limit,flag,i,j,count;
    printf("enter a number:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        flag=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
                 
            }
        }
        if(flag==0){
           printf("%d\n",i);
    }
    
    
    }
      
      }
