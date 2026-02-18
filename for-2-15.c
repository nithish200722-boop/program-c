#include <stdio.h>
#include <math.h>

int main() {
    int m=1000,a,i,e=0,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        if (m>b[i])
        m=b[i];
        if(b[i]<210)
        e++;
    }
    printf("minimum voltage=%d \n",m);
    printf("low voltage events=%d",e);

    return 0;
}
