//count array with highest repeats and print its count along with the number itself
#include <stdio.h>
int main()
{
    int n=0,ans=0,count=0,totalcount=0;
    scanf("%d",&n);
    int array[n],flag[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        flag[i]=0;
    }
    for(int i=0;i<n;i++){
        if(flag[i]==1){
            break;
        }
        for(int j=0;j<n;j++){
            if(array[i]==array[j]){
                flag[j]=1;
                count++;
            }
        }
        if(i==0){
            totalcount=count;
            ans=array[i];
        }
        if(count>totalcount){
            totalcount=count;
            ans=array[i];
        }
        count=0;
    }
    printf("%d count %d",ans,totalcount);
}
