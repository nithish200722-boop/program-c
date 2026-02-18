#include <stdio.h>
int main() {
    int N,rev=0;
    scanf("%d",&N);
    for(;N>0;N/=10)
    {
        rev=rev*10+(N%10);
    }
    printf("%d",rev);
    return 0;
}