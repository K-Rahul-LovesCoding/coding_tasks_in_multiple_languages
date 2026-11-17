// To merge 2 array and sort them in descending order
#include <stdio.h>
int main()
{
    int n=0,temp=0;
    scanf("%d",&n);
    int k=n;
    int array1[2*n], array2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&array2[i]);
    }
    for (int i=0;i<n;i++){
        array1[k]=array2[i];
        k++;
    }
    for (int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(array1[i]<array1[j]){
                temp=array1[i];
                array1[i]=array1[j];
                array1[j]=temp;
            }
        }
    }
    for (int i=0;i<k;i++){
        printf("%d\n",array1[i]);
    }
}
