#include <stdio.h>

int isPrime(int n)
{
    if(n <= 1)
        return 0;

    for(int i = 2;i<=n/2;i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int r,c,count = 0;

    scanf("%d%d",&r,&c);

    int matrix[r][c];

    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);

            if(isPrime(matrix[i][j]))
            {
                count++;
            }
        }
    }

    printf("%d",count);

    return 0;
}