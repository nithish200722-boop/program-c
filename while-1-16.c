#include<stdio.h>
int main()
{
   int a,b,c=0;
   int count=0;
   scanf("%d",&a);
   while(a>0){
       scanf("%d",&b);
       c=c+b;
       if(b>4){
           count++;
       }
       a--;
   }
   printf("Total Overtime:%d\n",c);
   printf("Burnout Days:%d",count);
   return 0;
}