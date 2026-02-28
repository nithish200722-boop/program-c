#include<stdio.h>
int main()
{
    int a,b,c,e=0;
    int d=0;
    int count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        if(d<=a){
            count++;
        }
        if(d>a){
            break;
        }
        b--;
    }
     e=d-a;
    printf("Completed Tripes:%d",count);
    printf("Remaining Fuels:%d",e);
   
    return 0;
}