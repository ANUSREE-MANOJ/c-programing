//serach a element from the sorted array
#include<stdio.h>
int findElement(int n,int key,int arr[]);
int main()
{
    int i;
    int arr[]={1,33,22,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);        
    int key=4;
    int position=findElement(n,key,arr);

    if(position==-1)
    {
       printf("element not found"); 
    }
    else{
        printf("element fount at position %d",position); 
    }

}
 int findElement(int n,int key,int arr[])
{  
    
    for(int i=0;i<=n;i++)
    {
     if(arr[i]==key)
     {
      return i;
     }
    
    }
    return -1;
}