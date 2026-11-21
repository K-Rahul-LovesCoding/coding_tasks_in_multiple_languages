#include <stdio.h>

int main()
{
    int b=1,a=0,n=0,k=0,j=0;
    scanf("%d",&n);
    int array[n];
    int round[5];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        do{
            a=array[i]%10;
            if(a!=0){
                round[k]=a*b;
                k++;
            }
            b=b*10;
            array[i]=array[i]/10;
        }while(array[i]!=0);
        printf("\n%d ",k);
        for(int j=k-1;j>=0;j--){
            printf("%d ",round[j]);
            round[j]=0;
        }
        b=1,k=0;
    }
}
