#include <stdio.h>

int main(){
    int n=0,flag=0,count=0,k=0;
    scanf("%d",&n);
    int array[n];
    int composite[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
       for(int j=2;j<=array[i]/2;j++){
        if(array[i]%j==0){
            flag=1;
            break;
        }
       }
       if(flag==1){
        composite[k]=array[i];
        k++;
       }
       flag=0;
    }
    for(int i=0;i<k;i++){
        printf("%d\n",composite[i]);
    }
}
