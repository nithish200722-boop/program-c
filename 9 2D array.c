#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int matrix[a][b];      
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&matrix[i][j]);
    int balancedCount=0;
    for(int i=0;i<a;i++)
    {
        int even=0;
        int odd=0;
        for(int j=0;j<b;j++)
        {
            if(matrix[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even==odd)
            balancedCount++;
    }
    printf("%d",balancedCount);
    return 0;
}