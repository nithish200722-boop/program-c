#include<stdio.h>
int main()
{
    int a,b,sum=0,s=0,c;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        sum+=c;  
        
        b--;
    }
    if(a<sum){
        s=sum-a;
        printf("Treated Patients:%d\n",a);
        printf("Rejected Patients:%d",s);
    }
    else{
    s=0;
    printf("Treated Patients:%d\n",sum);
    printf("Rejected Patients:%d",s);
        
    }
    return 0;
}