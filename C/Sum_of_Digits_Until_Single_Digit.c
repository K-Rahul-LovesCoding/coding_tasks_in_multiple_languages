#include <stdio.h>
int main()
{
    int count=0,n=0,b=0,sum=0;
    scanf("%d",&n);
    do{
       b=0;
       sum=0;
        do{
           b=n%10;
           sum=sum+b;
           n=n/10;
        }while(n!=0);
        if(sum>10){
            n=sum;
        }
    }while(sum>10);
    printf("%d",sum);
}