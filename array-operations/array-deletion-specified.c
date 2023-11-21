#include<stdio.h>



int BinarySearch(int arr[],int low,int high,int key)
{
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    if(arr[mid]<key)
    {
         return BinarySearch(arr,(mid+1),high,key);
    }
    else{
        return BinarySearch(arr,low,(mid-1),key);
    }
}
int Deletion(int arr[],int n,int key)
{
    int pos=BinarySearch(arr,0,n-1,key);
    int i;
    for(i=pos;i<=n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}



int main()
{
int i=0;
int arr[]={10,20,30,40,50};
int n=sizeof(arr)/sizeof(arr[0]);
int key=30;
 printf("before deletion");
 for(i=0;i<n;i++)
 {
    printf(" %d",arr[i]);
 }
n=Deletion(arr,n,key);
printf("\nafter deletion");
for(i=0;i<n;i++)
 {
    printf(" %d",arr[i]);
 }
}