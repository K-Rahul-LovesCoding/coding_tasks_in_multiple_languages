#include <stdio.h>

int main(){
    int n=0,leftsum=0,rightsum=0,flag=0,count=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            leftsum=leftsum+array[j];
        }
        for(int k=i+1;k<n;k++){
            rightsum=rightsum+array[k];
        }
        if(leftsum==rightsum){
            flag=1;
            count=count+1;
            printf("Number %d at index %d is equlibrium index\n",array[i],i);
        }
        rightsum=0;leftsum=0;
    }
    printf("count: %d",count);
    if(flag==0){
        printf("given array dont have any equilibrium index");
    }
}
