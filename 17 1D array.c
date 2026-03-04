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
    int valid=1; 
    for (int i=0,j=N-1;i<j;i++,j--) 
    {
        if (reading[i]!=reading[j])
        {
            valid=0; 
            break;
        }
    }
    if (valid)
        printf("Yes\n");
    else
        printf("No");
    return 0;
}