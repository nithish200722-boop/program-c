#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c[b],d = 0;
    while (d<b) {
        scanf("%d",&c[d]);
        d++;
    }
    int e=0,f=0;
    while (f<b && a>0) {
        a-=c[f];
        e++;
        f++;
    }
    if (a<0) {
        a=0;
    }
    printf("Days Used: %d\n",e);
    printf("Remaining Data: %dGB\n",a);

    return 0;
}
