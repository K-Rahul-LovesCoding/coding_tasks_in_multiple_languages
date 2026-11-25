#include <stdio.h>
int main()
{
    int n=0,temp=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    int r=0;
    int rotate[n];
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<n;j++){
            if(j==(n-1)){
                rotate[0]=array[j];
            }
            else{
                rotate[j+1]=array[j];
            }
            if(j==(n-1)){
                for(int k=0;k<n;k++){
                    array[k]=rotate[k];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("$%d\n",rotate[i]);
    }
}
