#include <stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    float array[n];
    for(int i=0;i<n;i++){
        scanf("%f",&array[i]);
    }
    float highest =array[0];
    float lowest =array[0];
    for(int i=1;i<n;i++){
        if(array[i]>highest){
            highest=array[i];
        }
        if(array[i]<lowest){
            lowest=array[i];
        }
    }
    printf("%f %f %f",lowest,highest, highest-lowest);
}
