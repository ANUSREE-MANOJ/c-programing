#include<stdio.h>
int st();
int main(){
    
    printf("%d\n",st());
    printf("%d\n",st());
}
int st()
{
     static int count=100;
     printf("%d\n",count);
     count++;
     printf("%d\n",count);
     return count;
}