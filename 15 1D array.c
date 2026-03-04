#include <stdio.h>
int main() {
    int n,a;
    int index=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a!=0) 
        {
            arr[index++]=a;
        }
    }
    while(index<n) 
    {
        arr[index++]=0;
    }
    for(int i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
        printf("\n");

    return 0;
}