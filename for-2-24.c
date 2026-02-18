#include <stdio.h>
#include <math.h>

int main() {
    int m=1000,a,i,e=0,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        sum+=b[i];
        if(b[i]>40)
        e++;
    }
    printf("total calls=%d \n",sum);
    printf("overloaded hours=%d",e);

    return 0;
}
