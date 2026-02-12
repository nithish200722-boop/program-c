#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
    {
        printf("digit");
    }
    else
    {
        printf("number is not digit");
    }
   
    return 0;
}