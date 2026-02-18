#include <stdio.h>

int main() {
    int a,i,c,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        sum+=b[i];
        
        
    }
    printf("%d",sum);

    return 0;
}
