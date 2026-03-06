#include <stdio.h>
int main()
{
    int b,c;
    scanf("%d %d",&b,&c);
    int a[100][100];
    for(int i=0;i<b;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int minSum=1000000000,index = 0;
    for(int i=0;i<b;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
            sum+=a[i][j];
        if(sum<minSum)
        {
            minSum=sum;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}