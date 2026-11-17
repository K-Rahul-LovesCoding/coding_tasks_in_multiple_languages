// To find leader digits in an array
#include <stdio.h>
int main()
{
    int n=0,flag=0,k=0;
    scanf("%d",&n);
    int array[n];
    int leader[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]<array[j]){
                flag=1;
            }
        }
    if(flag==0){
        leader[k]=array[i];
        k++;
    }
    flag=0;
    }
    for(int i=0;i<k;i++){
        printf("%d ",leader[i]);
    }
}
