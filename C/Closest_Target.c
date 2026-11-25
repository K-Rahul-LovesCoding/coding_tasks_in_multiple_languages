#include <stdio.h>
int main()
{
    int n=0,l=0,diff=0,sum=0,final=0,target=0;
    int length=0;
    scanf("%d",&n);
    scanf("%d",&target);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            for(int k=i;k<=j;k++){
                sum=sum+array[k];
                l++;
                if(i==0 && j==0){
                    final=diff;
                    length=l;
                }
            }
            diff=target-sum;
            if(diff>0){
                if((final>diff) || (final==diff && length>l)){
                    final=diff;
                    length=l;
                }
            }
            l=0;
            diff=0;
            sum=0;
        }
    }
    printf("%d %d",final,length);
}C
