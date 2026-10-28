#include <stdio.h>
int main()
{
    int n=0, b=1, count=0;
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        b=b*i;
    }
    printf("%d",b);
}