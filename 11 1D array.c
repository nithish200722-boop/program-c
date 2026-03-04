#include <stdio.h>
int main() 
{
    int n;
    int sum=0;
    int left=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
        }
    for(int i=0;i<n;i++)
    {
        if(left==sum-left-arr[i]) 
        {
            printf("%d\n",i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1\n");
    return 0;
}