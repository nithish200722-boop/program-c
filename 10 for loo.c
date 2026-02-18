#include <stdio.h>
int main() {
   int N;
   int a=0,b=1,c;
   scanf("%d",&N);
   if(N>=1)
   {
    printf("%d",a);
   }
   if(N>=2)
   {
       printf("%d",b);
   }
   for(int i=3;i<=N;i++)
   {
       c=a+b;
       printf("%d",c);
       a=b;
       b=c;
   }
    return 0;
}