#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int price[n];
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&price[i]);
    }
    int min_price=price[0];
    int max_profit=price[1]-price[0];

    for (int i=1;i<n;i++) 
    {
        int profit=price[i]-min_price;
        if (profit>max_profit)
        {
            max_profit=profit;
        }
        if (price[i]<min_price)
        {
            min_price=price[i];
        }
    }
    printf("%d",max_profit);
    return 0;
}