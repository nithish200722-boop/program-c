#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    int count=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        if(d<=a){
            count++;
        }
        if(d>a){
             d=d-c;
            break;
           
        }
        b--;
    }
    a=a-d;
    printf("Successful Purchases:%d\n",count);
    printf("Final Balance:%d",a);
    return 0;
}