#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int array[n];
    int updated[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(i!=(n-1)){
            updated[i+1]=array[i];
        }
        else{
            updated[0]=array[n-1];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",updated[i]);
    }
}
