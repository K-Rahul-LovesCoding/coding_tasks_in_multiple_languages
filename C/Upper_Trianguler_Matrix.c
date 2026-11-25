#include <stdio.h>
int main()
{
    int n=0,flag=0,k=1;
    scanf("%d",&n);
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=1;i<n;i++){
        for (int j=0;j<k;j++){
            if(k==n){
                break;
            }
            if(array[i][j]!=0){
                flag=1;
            }
        }
        k++;
    }
    if(flag==0){
        printf("upper Triangular matrix");
    }
    else{
        printf("non upper Triangular matrix");
    }
}
