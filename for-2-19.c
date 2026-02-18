#include <stdio.h>
#include <math.h>

int main() {
    int m = 0, a, i, e = 0;
    scanf("%d", &a);
    int b[a];
    for(i = 0; i < a; i++){
        scanf("%d", &b[i]);
        if (b[i] > m)
            m = b[i];

        if(b[i] > 70)
            e++;
    }
    printf("Maximum Noise: %d\n", m);
    printf("Noisy Periods: %d", e);

    return 0;
}
