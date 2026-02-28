#include<stdio.h>
int main()
{
    int a,b;
    int c=0,d=0; 
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        if(b==0){
            c++;
        
        if(c>d){
            d=c;
        }
        }
        else
        c=0;
        a--;
    }
    printf("Longest Default Streak:%d",d);
    return 0;
}