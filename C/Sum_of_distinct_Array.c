#include <stdio.h>

int main()
{
    int sum=0,flag=0,n=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++){
            if(array[i]==array[j]&&i!=j){
                flag=1;
            }
        }
        if(flag==0){
            sum=sum+array[i];
        }
        flag=0;
    }
    printf("%d",sum);
}
