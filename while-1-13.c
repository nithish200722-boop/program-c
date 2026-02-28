#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d\n%d",&a,&b);
    int count=0;
    while(b>0){
        scanf("%d",&c);
        d=d+c;
      count++;
        if(d>=a){
            break;
        }
        b--;
    }
    {
    
    if(d>=a){
    printf("Exhausted Days:%d\n",count);
    }
    else
    printf("Exhausted Days: Not Exhausted\n");
    }
    a=d-a;
   {
       
       if(a<0){
           printf("Overused Data:0");
       }
       else
          printf("Overused Data:%d",a);
   }
    
    return 0;
}