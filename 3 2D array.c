#include <stdio.h>
int main() 
{
    int b,c,a[100][100];
    scanf("%d %d",&b,&c);
    for(int i=0;i<b;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    int max=0,index=0;
    for(int i=0;i<b;i++) 
    {
        int count=0;
        for(int j=0;j<c;j++) 
        {
            int unique=1;
            for(int k=0;k<j;k++) 
            {
                if(a[i][j]==a[i][k])
                {
                    unique=0;
                    break;
                }
            }
            if(unique)
            {
            count++;
            }
        }

        if(count>max)
        {
            max=count;
            index=i;
        }
    }
    printf("%d",index);
    return 0;
}