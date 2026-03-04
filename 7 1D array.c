#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num;
    int even_count=0,odd_count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num%2==0)
            even_count++;
        else
            odd_count++;
    }
    printf("Even:%d Odd:%d", even_count, odd_count);
    return 0;
}