#include <stdio.h>
int main() {
    int number;
    scanf("%d",&number);
    if(number>10&&number<20)
    {
        printf("number is within range");
    }
    else
    {
        printf("number is not within range");
    }
   
    return 0;
}