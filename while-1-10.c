#include<stdio.h>
int main()
{
    int a,b;
    
    int count=0;
    scanf("%d",&a);
    
    while(a>0){
        scanf("%d",&b);
       if(b==0){
           count++;
       }
       a--;
    }
    printf("Inactive Weeks:%d\n",count);
      
       if(count>=3){
           printf("Risk Status:High");
       }
       else
       printf("Risk Status:Low");
   
    return 0;
}