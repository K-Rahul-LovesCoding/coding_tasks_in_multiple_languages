#include <stdio.h>
int main()
{
    int n=0,a=0,b=1,c=0,d=0;
    scanf("%d",&n);
    d=n;
    do{
        a=n%10;
        for(int i=a;i>0;i--)
        {
            b=b*i;
        }
        c=c+b;
        n=n/10;
        b=1;
    }while(n!=0);
    
    if(d==c)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
}
