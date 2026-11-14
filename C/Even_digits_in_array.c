#include <stdio.h>
int main()
{
    int n=0,count=0;
    scanf("%d",&n);
    int even[n];
    for(int i=0;i<n;i++){
        scanf("%d",&even[i]);
    }
    for(int i=0;i<n;i++){
        if (even[i]%2==0){
            count=count+1;
        }
    }
    if (count==0){
        printf("given array doesnt have an even number");
    }
    else{
        printf("%d",count);
    }
}
