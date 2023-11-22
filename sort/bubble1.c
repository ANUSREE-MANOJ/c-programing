#include<stdio.h>
#include<stdbool.h>
void swap(int* xy,int* zy)
{
   int temp=*xy;
   *xy=*zy;
   *zy=temp;
}
void bubblesort(int arr[],int n)
{
    bool swapped;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
              swap(&arr[j],&arr[j+1]);
              swapped=true;
            }
        }
            if(swapped==false)
            {
                break;
            }
        
    }
}
void printArray(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    printf("%d ,",arr[i]);
}
}
int main()
{
    int arr[100],n;
    printf("enter array size");
    scanf("%d",&n);
    printf("enter elements: ");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ,",arr[i]);
    }
    bubblesort(arr,n);
    printf("sorted array:");
    printArray(arr,n);
    return 0;
}