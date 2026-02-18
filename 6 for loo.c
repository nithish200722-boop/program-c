#include <stdio.h>
int main() {
    int N;
    long long factorial = 1;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    factorial = factorial * i;
    {
    printf(" %d",factorial);
    }
    return 0;
}