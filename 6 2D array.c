#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int b,c;
    scanf("%d %d",&b,&c);
    int a[100][100],sum[100];
    for(int i=0;i<b;i++)
    {
        sum[i]=0;
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i]+=a[i][j];
        }
    }
    int max=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            int diff=abs(sum[i]-sum[j]);
            if(diff>max)
            {
                max=diff;
            }
        }
    }
    printf("%d",max);
    return 0;
}