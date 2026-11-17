// To find second greatest digit in an array
#include <stdio.h>
int main()
{
    int n=0,largest=0,second=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    largest=array[0];
    for(int i=1;i<n;i++){
        if(largest<array[i]){
            second=largest;
            largest=array[i];
        }
        else if(array[i]>second && array[i]!=largest){
            second=array[i];
        }
    }
    printf("%d",second);
}
