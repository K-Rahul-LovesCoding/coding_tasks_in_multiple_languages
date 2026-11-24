//seperate array into half and do asc on first half and desc on second half
#include <stdio.h>
int main()
{
      int n=0,k=0,l=0,temp=0;
      scanf("%d",&n);
      int array[n],start[n],end[n];
      for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
      }
      for(int i=0;i<n;i++){
        if(n%2==0){
            if(i<n/2){
                start[k]=array[i];
                k++;
            }
            else if(i>=n/2){
                end[l]=array[i];
                l++;
            }
        }
        else if(n%2!=0){
            if(i<=n/2){
                start[k]=array[i];
                k++;
            }
            else{
                end[l]=array[i];
                l++;
            }
        }
      }
      for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(start[i]>start[j]){
                temp=start[i];
                start[i]=start[j];
                start[j]=temp;
            }
        }
      } 
      for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(end[i]<end[j]){
                temp=end[i];
                end[i]=end[j];
                end[j]=temp;
            }
        }
      } 
      for(int i=0;i<k;i++){
        printf("%d\n",start[i]);
      }  
      printf("\n");
      for(int i=0;i<l;i++){
        printf("%d\n",end[i]);
      }
}
