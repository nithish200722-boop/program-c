#include <stdio.h>
int main() {
int N,original,reverse=0,digit;
scanf("%d",&N);
original=N;
for(;N>0;N=N/10)
{
    digit=N%10;
    reverse=reverse*10+digit;
}
if(original==reverse)
{
    printf("yes");
}
else
{
    printf("No");
}
   return 0;
}