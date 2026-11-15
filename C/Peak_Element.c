#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        if(i==0){
            if(array[0]>array[1]){
                printf("peak element: %d",array[0]);
            }
        }
        else if(i==n-1){
            if(array[i]>array[i-1]){
                printf("peak element: %d",array[i]);
            }
        }
        else{
            if((array[i]>array[i+1])&&(array[i]>array[i-1])){
                printf("Peak Element: %d",array[i]);
            }
        }
    }
}
