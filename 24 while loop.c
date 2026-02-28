#include<stdio.h>
int main()
{
    int f,n,b,s=-1,w=0,i=1;
    scanf("%d",&f);
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&b);
        f-=b;
        if(f<0){
            s=i;
            w-=f;
            break;
        }
        i++;
    }
    if(s!=-1)
      printf("Emergency Stage:%d\n",s);
      else
      printf("Emergency Stage: Not Occured\n");
      
      printf("Fuel wasted:%d\n",w);
      return 0;
}