#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int matrix[a][b];
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&matrix[i][j]);
    int sortedCount=0;
    for(int i=0;i<a;i++)
    {
        int isSorted=1;
        for(int j=0;j<b-1;j++)
        {
            if(matrix[i][j] > matrix[i][j+1])
            {
                isSorted=0;
                break;
            }
        }
        if(isSorted)
            sortedCount++;
    }
    printf("%d", sortedCount);
    return 0;
}