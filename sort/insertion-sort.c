#include<stdio.h> 
#include<stdlib.h>

 void InsertionSort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=0;
        
        for(j=i;j>0&&arr[j-1]>arr[j];j--)
        {
             temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;

            
        }
           
    }    
        
    
}





void printArray(int arr[],int n)
{
    int i=0;
    for(i=0;i<=n-1;i++)
    {
        printf(" %d,",arr[i]);
    }
}
int main()
{
    int arr[]={55,44,33,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    printf("\nsorted array");
    printArray(arr,n);
}