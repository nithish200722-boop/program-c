#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int Count=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        {
            Count++;
        }
    }
    printf("%d",Count);
    return 0;
}