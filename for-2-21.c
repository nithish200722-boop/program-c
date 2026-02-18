#include <stdio.h>

int main()
{
    int a, n,d=0,u;
    scanf("%d", &a);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &u);
        a-=u;
        if(a<0)
        d++;
        
        
    }
    printf("Remaining capacity: %d\n",a);
    printf("overflow days: %d\n",d);

    return 0;
}
