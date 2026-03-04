#include <stdio.h>
int main() 
{
    int N;
    scanf("%d",&N);
    int reading[N];
    for (int i=0;i<N;i++)
    {
        scanf("%d",&reading[i]);
    }
    for (int i=0;i<N;i++) 
    {
        if (reading[i]<0) 
        {
            reading[i]=0;
        }
    }
    for (int i=0;i<N;i++) 
    {
        printf("%d ",reading[i]);
    }
    printf("\n");
    return 0;
}