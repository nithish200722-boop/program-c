#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if(number%3==0&&number%7==0)
    {
        printf("multiple of both 3 and 7");
    }
    else
    {
        printf("not same");
    }
}