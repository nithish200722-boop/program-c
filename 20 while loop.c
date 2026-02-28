#include <stdio.h>

int main() {
    int N;
    int previous;
    int current;
    int drops=0;
    int consecutive=0;
    int crashday=-1;
    int day=2;
    scanf("%d",&N);
    scanf("%d",&previous);
    while(day<=N)
    {
        scanf("%d",&current);
        if(current<previous)
        {
            drops++;
            consecutive++;
            
            if(consecutive==3&&crashday==-1)
            {
                crashday=day;
            }
        }
            else
            {
                consecutive=0;
            }
            previous=current;
            day++;
        }
        printf("crash day:%d\n",crashday);
        printf("Total Drops:%d",drops);
    return 0;
}