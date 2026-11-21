//Print an identity matrix if any element in the 3x3 matrix is zero, otherwise print its transpose.
#include <stdio.h>

int main()
{
    int flag=0,n=0,m=0;
    scanf("%d %d",&n,&m);
    int array[n][m];
    int ans[n][m];
    if(n!=m){
        printf("Invalid input");
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(array[i][j]==0){
                flag=1;
            }
        }
    }
    if(flag==1){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    ans[i][j]=0;
                }
                else{
                    ans[i][j]=1;
                }
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=array[j][i];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}
