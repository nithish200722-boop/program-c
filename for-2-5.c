#include <stdio.h>

int main() {
    int a,i,c,sum=0;
    scanf("%d",&a);
    scanf("%d",&c);
    int b[c];
    for(i=1;i<=c;i++){
        scanf("%d",&b[i]);
        sum+=b[i];
        
        
    }
    printf("%d",a-sum);

    return 0;
}
