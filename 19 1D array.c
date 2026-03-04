#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int v[N];
    for (int i=0;i<N;i++) 
    {
        scanf("%d",&v[i]);
    }
    int count=0;
    
    for (int i=0;i<N;i++) 
    {
        int duplicate=0;
        for (int j=0;j<i;j++) 
        {
            if (v[i]==v[j])
            {
                duplicate=1;
                break;
            }
        }
        if (!duplicate) 
        {
            count++;
        }
    }
    
    printf("%d\n",count);
    return 0;
}