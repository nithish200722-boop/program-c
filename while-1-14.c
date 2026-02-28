#include<stdio.h>
int main()
{
   int a,b,c,d=0,e=0;
   scanf("%d\n%d",&a,&b);
   int count=0;
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
   
   printf("Successful Withdrawls:%d\n",count);
   a=a-d;
   printf("Remaining Cash:%d",a);
   return 0;
}