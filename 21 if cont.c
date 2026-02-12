#include <stdio.h>
int main() {
    char operation;
    scanf("%c",&operation);
    int a,b;
    scanf("%d %d",&a,&b);
    switch (operation)
    {
        case'+':
        printf("result=%d",a+b);
        break;
        case'-':
        printf("result=%d",a-b);
        break;
        case'*':
        printf("result=%d",a*b);
        break;
        case'/':
        printf("result=%d",a/b);
        break;
        default:
        printf("not valid operation");
        break;
    }
    return 0;
}