#include <stdio.h>
int main()
{
    int sum=0,n=0,b=0;
    scanf("%d",&n);
    for(int i=n-1;i>0;i--)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
}