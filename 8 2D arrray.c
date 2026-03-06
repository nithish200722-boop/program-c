#include <stdio.h>
int main() {
    int b,c;
    scanf("%d%d",&b,&c);
    int matrix[b][c];
    for(int i=0;i<b;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&matrix[i][j]);
    int maxSum=0;
    for(int i=0;i<b-1;i++) 
    {  
        for(int j=0;j<c-1;j++)
        {
            int sum=matrix[i][j]+matrix[i][j+1]+matrix[i+1][j]+matrix[i+1][j+1];
            if(sum>maxSum)
            {
                maxSum=sum;
            }
        }
    }
    printf("%d",maxSum);
    return 0;
}