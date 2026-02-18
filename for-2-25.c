#include <stdio.h>
#include <math.h>

int main() {
    int m=1000,a,i,e=0,max=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        if (max<b[i]);
        max=b[i];
        if(b[i]>140)
        e++;
    }
    printf("total calls=%d \n",max);
    printf("overloaded hours=%d",e);

    return 0;
}
