#include<stdio.h>
int main()
{
    int a,b,c;
   int count=0;
    int d=0;
    scanf("%d",&a);
    scanf("%d",&b);
     int e=(a*90)/100;
    while(b>0){             
        scanf("%d",&c);
       d=d+c;
      
    if(d>e){
        count++;
    }    
    b--;
    }
    printf("Final Occupied Beds:%d\n",d);
    printf("critical Hours:%d",count);
    
    
   
    return 0;

}