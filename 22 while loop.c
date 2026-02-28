#include<stdio.h>
int main()
{
    int a,b,aa=0;
    int count=0,c=0,l=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        c++;
        if(b==0){
            count++;
            aa++;
        }
        else{
            count=0;
        }
        if(count==3 && l==0){
            printf("Lock Triggered At Attempt:%d\n",c);
            l=1;
        }
        
            
        
        
        a--;
    }
    if(l==0){
        printf("Lock Triggered At Attempt: NOt Locked\n");
    }
    printf("Total failed Attempts:%d",aa);
    return 0;
}