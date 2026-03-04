#include <stdio.h>
#include <limits.h>
int main() 
{
    int n,a;
    int min=INT_MAX;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ 
        scanf("%d",&a);
        if(a>0&&a<min) 
        min=a;
    }
    if(min==INT_MAX) 
    {
        printf("No positive\n");
    }
    else 
    {
        printf("%d",min);
    }
    return 0;
}