#include<stdio.h>
int main()
{
    int i,n,key,flag=0;
    int arr[100];
    printf("array size");
    scanf("%d",&n);
    printf("\nenter array elements:");
    for(i=0;i<n;i++)
    {
        scanf(" %d,",&arr[i]);
    }
     printf("\nentered array elements:");
    for(i=0;i<n;i++)
    {
        printf(" %d,",arr[i]);
    }
    printf("enter element for deletion");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        for(;i<=n-1;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    printf("\nafter deletion array elements:");
    for(i=0;i<n-1;i++)
    {
        printf(" %d,",arr[i]);
    }
}