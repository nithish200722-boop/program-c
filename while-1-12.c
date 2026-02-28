#include<stdio.h>
int main()
{
    int a,b,d=0;
    int count=0;
    scanf("%d",&a);
    
    while(a>0){
        scanf("%d",&b);
        if(b>d){
        d=b;
        }
         
        if(b>5){
            count++;
        }
      a--;  
    }
    printf("Maximum Usage:%d\n",d);
    printf("Surge Hours:%d",count);
    return 0;

}