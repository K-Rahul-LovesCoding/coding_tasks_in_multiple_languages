//Subarray with equal number no of 1 and 0 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diff=0,n=0,ocount=0,zcount=0,final=0,count=0,final_count=0,start=0,stop=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=i;k<=j;k++){
                if(array[k]==0){
                    zcount++;
                }
                else{
                    ocount++;
                }
                count++;
            }
            diff=abs(zcount-ocount);
            zcount=0,ocount=0;
            if (i==0 && j==1){
                final_count=count;
                final=diff;
            }
            if((final>diff) || ((final==diff) && (final_count<count))){
                final=diff;
                final_count=count;
                start=i;
                stop=j;
            }
            zcount=0,ocount=0,count=0,diff=0;
        }
    }
    for(int i=start;i<=stop;i++){
        printf("%d",array[i]);
    }
}
