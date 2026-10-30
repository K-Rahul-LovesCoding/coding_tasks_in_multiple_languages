#include <stdio.h>
int main()
{
    int n=0,x=0, a=2,b=1,ans=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
        for(int j=a;j>0;j--){
              b=b*j;
    }
    if(i%2==0){
        ans=ans+(x+a)*b;
    }
    else{
        ans=ans-(x+a)*b;
    }
    a=a+2;
    b=1;
    }
    printf("%d",ans+1);
}
