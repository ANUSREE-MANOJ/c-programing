#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[100],i,n,pos,key;
printf("enter array size:");
scanf("%d",&n);
printf("\nenter array elements:");
for(i=0;i<=n;i++)
{
    scanf("%d",&arr[i]);
}
printf("\nentered array elements:");
for(i=0;i<=n;i++)
{
    printf("%d,",arr[i]);
}
printf("\nenter position for insertion");
scanf("%d",&pos);
printf("\nenter element for insertion");
scanf("%d",&key);
for(i=n-1;i>=pos;i--)
{
    arr[i+1]=arr[i];
}
arr[pos]=key;

printf("array elements after insertion");
for(i=0;i<=n;i++)
{
    printf(" %d,",arr[i]);
}
}
