#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a;
    printf("%d",a/=b);
    printf(" %d",c%=b);
  
    return 0;
}