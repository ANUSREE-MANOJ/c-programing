#include<Stdio.h>
int main()
{
    int arr[5];
    printf("enter array elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("array elements are:");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }

}
