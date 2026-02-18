#include <stdio.h>
#include <math.h>

int main() {
    int a, i, e = 0, sum = 0;

    scanf("%d", &sum);   
    scanf("%d", &a);     

    int b[a];

    for(i = 0; i < a; i++) {
        scanf("%d", &b[i]);
        sum = sum - b[i];  

        if(sum < 5000)     
            e++;
    }

    printf("Remaining Cash: %d\n", sum);
    printf("Risk Count: %d", e);

    return 0;
}
