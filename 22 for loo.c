#include <stdio.h>
int main() {
   int n,i,j,count=0,isPrime;
   scanf("%d",&n);
   for(i=2;j<-n;i++)
   {
       isPrime=1;
       for(j-2;j<-i/2;j++)
       {
           if(i%j==0)
           {
               isPrime=0;
               break;
           }
       }
       if (isPrime ==1)
       {
           count++;
       }
   }
   printf("%d",count);
   return 0;
}