#include <stdio.h>

int main() 
{
    int a,b,c,e;
    scanf("%d %d",&a,&b);
    c=a/b;
    e=a%b;
    printf("Quotient=%d",c);
    printf(" Remainder=%d",e);
    return 0;
}