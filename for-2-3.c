#include <stdio.h>
#include <math.h>

int main() {
    int a,i,sum=0;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++){
        scanf("%d",&b[i]);
        sum+=b[i];
        
    }
    printf("total units= %d",sum);

    return 0;
}
