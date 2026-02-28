#include <stdio.h>
int main() {
    int N,b;
    scanf("%d",&N);              
    scanf("%d",&b); 
    int ba=b,lb=0,i=0,t;
    while (i < N) {
        scanf("%d",&t);
        if (ba<2000) {
            lb++;        
        }
        ba += t;      
        
        i++;
    }
    
    printf("Final Balance:%d\n",ba);
    printf("Low Balance Days:%d\n",lb);

    return 0;
}
