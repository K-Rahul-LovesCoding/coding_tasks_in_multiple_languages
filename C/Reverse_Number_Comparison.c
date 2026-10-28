#include <stdio.h>
int main()
{
    int n=0, b=0,c=0,d=0, count=0;
    scanf("%d",&n);
    d=n;
    do{
        b=n%10;
        c=c*10+b;
        n=n/10;
    }while(n!=0);
    if(c>d)
    {
        printf("Reversed number is greater");
    }
    else if(c==d)
    {
        printf("Reversed number is equal");
    }
    else
    {
        printf("Reversed number is smaller");
    }
}