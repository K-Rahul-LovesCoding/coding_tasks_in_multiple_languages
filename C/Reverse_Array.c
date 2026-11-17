// To reverse array
#include <stdio.h>
int main()
{
    int n=0,temp=0;
    scanf("%d",&n);
    int array[n];
    int reverse[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        reverse[i]=array[n-1-i];
    }
    for(int i=0;i<n;i++){
        printf("%d",reverse[i]);
    }
}
