#include<stdio.h>
int insertion(int arr[],int n,int key,int capasity)
{
if(n>=capasity)
{
    return n;
}
arr[n]=key;
return (n+1);
}

int main()
{
    int arr[20]={1,22,33,44,55,65};
    int capasity=sizeof(arr)/sizeof(arr[0]);
    int n=6;
    int key=75;
    printf("before insertion\n");
     for (int i=0;i<n;i++)
     {
        printf("%d,",arr[i]);
     }
    n= insertion(arr,n,key,capasity);
printf("\nafter insertion");
 for (int i=0;i<n;i++)
     {
        printf("%d,",arr[i]);
     }
}