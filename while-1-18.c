#include<stdio.h>
int main()
{
    int a,b,c;
    int s=0,f=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        if (c<a){
            s++;
        }
        else{
            f++;
        }
        b--;
    }

    printf("Safe Hours:%d\n",s);
    printf("Failure Count:%d",f);
    return 0;
}