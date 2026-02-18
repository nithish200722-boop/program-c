#include <stdio.h>
int main() {
    int  N,M;
    int sum=0;
    scanf("%d %d",&M,&N);
    for(int i=M;i<=N;i++)
    {
        if(i%M==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}