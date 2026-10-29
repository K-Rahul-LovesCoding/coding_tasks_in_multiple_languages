#include <stdio.h>
int main()
{
    int a=0,n=0,b=0,sum=0,c=1,count=0,d=0;
    scanf("%d",&n);
    a=n;
    d=n;
    do{
        a=a/10;
        count++;
    }while(a!=0);
    do{
        c=1;
        b=n%10;
        for(int i=count;i>0;i--){
            c=c*b;
            if(c==0 && i==count){
                c=1;
            }
        }
        sum=sum+c;
        n=n/10;
    }while(n!=0);
    if(d==sum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}