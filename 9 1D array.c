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
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<max) 
        {
            arr[i]=-1;   
        }
        else 
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++) {
        if(arr[i]!=-1) {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}