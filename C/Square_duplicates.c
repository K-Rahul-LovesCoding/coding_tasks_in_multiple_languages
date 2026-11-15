#include <stdio.h>

int main(){
    int n=0;
    scanf("%d",&n);
    int old[n];
    int new[n];
    int flag[n];
    for(int i=0;i<n;i++){
        scanf("%d",&old[i]);
        flag[i]=0;
    }
    for(int i=0;i<n;i++){
        if(flag[i]==1){
            new[i]=(old[i]*old[i]);
            continue;
        }
        for(int j=0;j<n;j++){
            if(old[i]==old[j]){
                flag[j]=1;
                new[i]=old[i];
            }
            else{
                new[i]=old[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",new[i]);
    }
}
