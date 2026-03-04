#include <stdio.h>
int main() 
{
    int N;
    scanf("%d",&N);
    int growth[N];
    for (int i=0;i<N;i++) 
    {
        scanf("%d",&growth[i]);
    }
    int max_len=1,curr_len=1;
    for (int i=1;i<N;i++) 
    {
        if (growth[i]>growth[i-1])
        {
            curr_len++;
        } 
        else 
        {
            curr_len=1;
        }
        if (curr_len>max_len)
            max_len=curr_len;
    }
    printf("%d\n",max_len);
    return 0;
}