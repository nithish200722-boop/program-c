#include <stdio.h>
#include <math.h>

int main() {
    int m=0,a,i,e=0,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        if (m<b[i])
        m=b[i];
        if(b[i]>100)
        e++;
    }
    printf("highest price =%d \n",m);
    printf("high price days=%d",e);

    return 0;
}
