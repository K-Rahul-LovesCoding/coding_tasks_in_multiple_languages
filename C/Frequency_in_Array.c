#include <stdio.h>
int main()
{
    int n=0,count=1;
    scanf("%d",&n);
    int frequency[n],visited[n];
    for(int i=0;i<n;i++){
        scanf("%d",&frequency[i]);;
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            for(int j=i+1;j<n;j++){
            if(frequency[i]==frequency[j]){
                count=count+1;
                visited[j]=1;
            }
          }
        printf("Frequency of digit %d = %d\n",frequency[i],count);  
        }
        count=1;
    }
}
