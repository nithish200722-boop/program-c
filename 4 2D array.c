#include <stdio.h>
int main()
{
    int b,c;
    scanf("%d %d",&b,&c);
    int a[100][100];
    for(int i=0;i<b;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<b;i++) 
    {
        for(int j=0;j<c;j++)
        {
            for(int x=i;x<b;x++)
            {
                for(int y=(x==i?j+1:0);y<c;y++)
                {
                    if(a[i][j]==a[x][y])
                    {
                        printf("%d",a[i][j]);
                        return 0;
                    }
                }
            }

        }
    }
    return 0;
}