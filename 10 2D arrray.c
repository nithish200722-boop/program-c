#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int matrix[a][b];
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&matrix[i][j]);
    int maxRowIndex=0;
    long long maxProduct=1;
    for(int j=0;j<b;j++)
        maxProduct*=matrix[0][j];
    for(int i=1;i<a;i++)
    {
        long long product=1;
        for(int j=0;j<b;j++)
            product*=matrix[i][j];
        if(product>maxProduct)
        {
            maxProduct=product;
            maxRowIndex=i;
        }
    }
    printf("%d",maxRowIndex);
    return 0;
}