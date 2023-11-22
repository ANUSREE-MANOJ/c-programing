#include<stdio.h>
#include<stdlib.h>


void SelectionSort(int arr[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]>arr[j])
        {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
        }
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
    SelectionSort(arr,n);
    printf("\nsorted array");
    printArray(arr,n);
}