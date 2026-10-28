#include <stdio.h>
int main()
{
    int a=0,b=0,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            count=count+1;
        }
    }
    printf("%d",count);
}