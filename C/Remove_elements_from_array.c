#include <stdio.h>

int main(){
    int n=0,index=0,k=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&index);
    for (int i=0;i<n-1;i++){
        int update[k];
        if(i>=index){
            update[k]=array[i+1];
            printf("%d\n",update[k]);
        }
        else{
            update[k]=array[i];
            printf("%d\n",update[k]);
        }
        k=k+1;
    }
}
