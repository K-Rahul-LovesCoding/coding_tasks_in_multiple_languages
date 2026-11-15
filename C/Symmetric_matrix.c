#include <stdio.h>
int main()
{
    int r=0,c=0,flag=0;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    if(r!=c){
        printf("asymetric matrix");
        return 0;
    }
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]!=matrix[j][i]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("symmetric matrix");
    }
    else{
        printf("asymmetric matrix");
    }
}
