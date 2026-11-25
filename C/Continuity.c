#include <stdio.h>
#include <math.h>
int main()
{
    int n=0,flag=0,k=0;
    scanf("%d",&n);
    int array[n];
    int new[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(i>0 && (fabs(array[i]-array[i-1])==1)){
            flag=1;
        }
        else if(i<(n-1) && (fabs(array[i+1]-array[i])==1)){
            flag=1;
        }
        if(flag==1){
            new[k]=array[i];
            k++;
        }
        flag=0;
    }
    for(int i=0;i<k;i++){
        printf("%d",new[i]);
    }
}
