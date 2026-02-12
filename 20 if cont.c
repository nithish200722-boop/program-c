#include <stdio.h>
int main() {
    int a,b,smallest;
    scanf("%d %d",&a,&b);
    smallest=(a<b)?a:b;
    printf("%d is smallest",smallest);
    return 0;
}