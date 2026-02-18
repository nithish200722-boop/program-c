#include <stdio.h>

int main() {
    int a,i,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        sum+=b[i];
        
    }
    if(sum<10000)
    printf("approved");
    else
    printf("limit exceeded");

    return 0;
}
