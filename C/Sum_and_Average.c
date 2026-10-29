#include <stdio.h>
int main()
{
    int count=0,n=0,b=0,sum=0;
    float avg=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        scanf("%d",&b);
        sum=sum+b;
        b=0;
    }
    printf("sum: %d ",sum);
    printf("avg: %.2f",(float)sum/n);
}