#include <stdio.h>
int main()
{
    int n=0
    scanf("%d",&n);
    int a=n-1;
    int normal[n],reverse[n];
    for(int i=0;i<n;i++){
        scanf("%d",&normal[i]);
    }
    for(int i=0;i<n;i++){
        reverse[i]=reverse[a-i];
    }
    for(int i=0;i<n;i++){
        printf(" %d ",reverse[i]);
    }
}
