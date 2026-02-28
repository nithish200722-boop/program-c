#include<stdio.h>
int main()
{
    int a,n;
    int c=0,v=0,ls=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&n);
        if(n>70){
            c++;
            ls++;
            
            if(ls>v)
            v=ls;
        }
        else{
            ls=0;
        }
        a--;
    }
    
  
    
    printf("Noise Violation:%d\n",c);
    printf("Longest violation streak:%d",v);
}
