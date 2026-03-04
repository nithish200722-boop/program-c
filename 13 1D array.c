#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int marks[n];
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    float avg=(float)sum/n;
    for(int i=0;i<n;i++) 
    {
        if(marks[i]>avg)count++;
    }
    printf("%d",count);
    return 0;
}