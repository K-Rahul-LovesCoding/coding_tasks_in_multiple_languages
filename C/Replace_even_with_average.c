#include <stdio.h>

int main(){
    int n=0,flag=0,count=0,sum=0;
    float avg=0.0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]%2==0){
            sum=sum+array[i];
            count++;
        }
    }
    avg=(float)sum/count;
    for (int i=0;i<n;i++){
        if(array[i]%2==0){
            array[i]=avg;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
    }
}
