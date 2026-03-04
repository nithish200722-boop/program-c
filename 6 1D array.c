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
    for(int i=0;i<n;i++) 
    {
        int Duplicate=0;
        for(int j=0;j<i;j++) 
        {
            if(arr[i]==arr[j])
            {
                Duplicate = 1;
                break;
            }
        }
        if(!Duplicate) 
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}