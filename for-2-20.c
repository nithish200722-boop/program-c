#include <stdio.h>

int main() {
    int a, b, c, d = 0;   
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < b; i++) {
        scanf("%d", &c);

        if(a >= c) {
            a = a - c;
            d++;
        } else {
            break;
        }
    }

    printf("Remaining Data: %d\n", a);
    printf("Successful Days: %d\n", d);

    return 0;
}
