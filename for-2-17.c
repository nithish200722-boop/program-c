#include <stdio.h>
#include <math.h>

int main() {
    int a,i,e=0,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        
        sum+=b[i];
        if(b[i]>30)
        e++;
    }
    printf("total delay=%d \n",sum);
    printf("delayed deliverier=%d",e);

    return 0;
}
