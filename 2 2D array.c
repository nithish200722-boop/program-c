#include <stdio.h>
#include <limits.h>
int main()
{
    int R,C;
    scanf("%d %d",&R,&C);
    int a[R][C];
    int max[R],min[R];
    for(int i=0;i<R;i++)
    {
        max[i]=INT_MIN;
        min[i]=INT_MAX;
        for(int j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]>max[i])
              max[i]=a[i][j];
            if(a[i][j]<min[i])
              min[i]=a[i][j];
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<R;i++)
        for(int j=i+1;j<R;j++) 
        {
            int p1=max[i]*max[j];
            int p2=min[i]*min[j];
            if(p1>ans) 
              ans=p1;
            if(p2>ans)  
              ans=p2;
        }
    printf("%d", ans);
    return 0;
}