#include <stdio.h>
int main() 
{
    int b,c;
    scanf("%d %d",&b,&c);
    int matrix[b][c];
    for(int i=0;i<b;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&matrix[i][j]);
    int count=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<c;j++) 
        {
            int elem=matrix[i][j];
            int rowMin=1,colMax=1;
            for(int k=0;k<c;k++)
                if(matrix[i][k]<elem)
                {
                    rowMin=0;
                }
            for(int k=0;k<b;k++)
                if(matrix[k][j]>elem)
                {
                    colMax=0;
                }
            if(rowMin&&colMax)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
