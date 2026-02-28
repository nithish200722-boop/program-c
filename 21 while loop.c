#include <stdio.h>

int main() {
     int N;
     int vehicles;
     int congestion=0;
     int current=0;
     int longstreak=0;
     int i=0;
     scanf("%d",&N);
     while(i<N)
     {
         scanf("%d",&vehicles);
         
         if(vehicles>20)
         {
             congestion++;
             current++;
             
             if(current>longstreak)
             {
                 longstreak=current;
             }
         }
             else
             {
                 current=0;
             }
             i++;
     }
     printf("Congestion minutes:%d\n",congestion);
     printf("Longest congestion streak:%d",longstreak);
    return 0;
}