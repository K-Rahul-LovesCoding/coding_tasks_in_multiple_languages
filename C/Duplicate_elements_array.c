#include <stdio.h>
int main()
{
    int n=0,flag=0,k=0;
    scanf("%d",&n);
    int duplicate[n],real[n];
    for(int i=0;i<n;i++){
        scanf("%d",&duplicate[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           if(duplicate[i]==duplicate[j]){
                flag=1;
            }
        }
        if(flag==0){
            real[k]=duplicate[i];
            k++;
        }
        flag=0;
    }
    for(int i=0;i<k;i++){
        printf("%d",real[i]);
    }
}
