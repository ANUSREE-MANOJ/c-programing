#include<Stdio.h>
#include<stdbool.h>
int swap(int* xp,int* yp){

int temp;
temp=*xp;
*xp=*yp;
*yp=temp;
}
void Bubblesort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++)
    { 
        swapped=false;
        for(j=0;j<=n-i-1;j++)
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
    Bubblesort(arr,n);
    printf("\nsorted array");
    printArray(arr,n);
}