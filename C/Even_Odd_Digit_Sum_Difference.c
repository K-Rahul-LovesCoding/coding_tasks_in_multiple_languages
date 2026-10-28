#include <stdio.h>
int main()
{
    int n=0, b=0, even=0, odd=0;
    scanf("%d",&n);
    do{
        b=n%10;
        if(b%2==0){
            even=even+b;
        }
        else{
            odd=odd+b;
        }
        n=n/10;
        b=0;
    } while(n!=0);
    int ans;
    ans=even-odd;
    printf("%d",ans);
}