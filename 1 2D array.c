#include <stdio.h>
#include <limits.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int salary[a][b];
    for(int i=0;i<a;i++) 
    {
        for(int j=0;j<b;j++) 
        {
            scanf("%d",&salary[i][j]);
        }
    }
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<a;i++) 
    {
        for(int j=0;j<b;j++)
        {
            int val=salary[i][j];
            if(val>max1) 
            {
                max2=max1;
                max1=val;
            }
            else if(val>max2&&val!=max1)
            {
                max2=val;
            }
        }
    }
    printf("%d",max2);
    return 0;
}