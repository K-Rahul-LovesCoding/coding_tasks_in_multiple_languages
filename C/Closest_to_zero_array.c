#include <stdio.h>
#include <math.h>

int main(){
    int n=0, diff=0, innerdiff=0,ans1=0,ans2=0;
    scanf("%d",&n);
    if(n>10 || n<2){
        printf("invalid input");
        return 0;
        }
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            innerdiff=fabs(num[i]+num[j]);
            if(j==1){
                diff=innerdiff;
                ans1=num[i];
                ans2=num[j];
            }
            else if(innerdiff<diff){
                diff=innerdiff;
                ans1=num[i];
                ans2=num[j];
            }
        }
    }
    printf("%d %d %d ",ans1,ans2,diff);
}               
