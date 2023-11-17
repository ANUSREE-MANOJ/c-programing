#include<stdio.h>
#include<Stdlib.h>
  
int  binarySearch(int arr[],int low,int high,int key)
{
   if(high<low)
   {
      return -1;
   }
   int mid=(low+high)/2;

if(key==arr[mid])
{
return mid;
}
if(key>arr[mid])
{
    return binarySearch(arr,(mid+1),high,key);
    return binarySearch(arr,low,(mid-1),key);

}

}
 int main()
    {
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int key=30;
    printf("index %d\n",binarySearch(arr,0,size-1,key));
    return 0;
}