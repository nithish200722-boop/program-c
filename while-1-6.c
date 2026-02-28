
#include<stdio.h>
int main()
{
    int a,b,c;
   int count=0;
    int d=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b>0){
        scanf("%d",&c);
       d=d+c;
    if(d<a){
        count++;
    }    
    b--;
    }
     printf("Passengers Allowded:%d\n",count);
    if(d>a){
        printf("Overloaded:Yes");
    }
    else
    printf("Overloaded:No");
    
    
   
    return 0;

}
