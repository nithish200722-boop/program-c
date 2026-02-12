#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if(number%11==0)
    {
        printf("divisible by 11");
    }
    else
    {
        printf("not divisible");
    }
}