#include<stdio.h>
int main()
{
    int a,b,aa=0;
    int count=0,c=0,l=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        c++;
        if(b>70){
            count++;
            aa++;
        }
        else{
            count=0;
        }
        if(count==3 && l==0){
            printf("Breakdown At Reading:%d\n",c);
            l=1;
        }
        
            
        
        
        a--;
    }
    if(l==0){
        printf("Breakdown At Readings: Not Occured\n");
    }
    printf("Unsafe Readings:%d",aa);
    return 0;
}