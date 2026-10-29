#include <stdio.h>
int main()
{
    int count=0,n=0,b=0,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%3==0){
            continue;
        }
        else{
            sum=sum+i;
        }
        if(sum>50){
            b=i;
            break;
        }
        else{
            b=i;
        }
    }
    printf("sum: %d ",sum);
    printf("last digit: %d ",b);
}