#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if(number%5==0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("non divisible");
    }
    return 0;
}