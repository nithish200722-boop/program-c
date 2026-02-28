#include<stdio.h>
int main()
{
    int a,b,d=0;
    int count=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        d=d+b;
        if(b>2){
            count++;
        }
      a--;  
    }
    printf("Total Delay:%d\n",d);
    printf("Delayed Days:%d",count);
    return 0;
}