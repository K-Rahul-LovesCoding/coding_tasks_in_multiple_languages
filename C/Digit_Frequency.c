#include <stdio.h>
int main()
{
    int n=0, b=0,c=0,d=0, count=0;
    scanf("%d",&n);
    scanf("%d",&b);
    d=n;
    do{
        c=n%10;
        if(b==c){
            count++;
        }
        n=n/10;
        c=0;
    }while(n!=0);
    printf("%d",count);
}