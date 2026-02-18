#include <stdio.h>
#include <math.h>

int main() {
    int a,i,e=0,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        sum+=b[i];
        if(b[i]>50)AC
        e++;
    }
    printf("average per day %d \n",sum);
    printf("over rain=%d",e);

    return 0;
}
