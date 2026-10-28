#include <stdio.h>
int main()
{
    int n=0, b=0, count=0;
    scanf("%d %d",&n,&b);
    for (int i=n;i>0;i--)
    {
        for(int j=n-1;j>0;j--)
        {
           
            if(i+j==b)
            {
                if(i==j || j>i){
                    
                }
                else
                {
                    printf("%d %d\n", j, i);
                    count=count+1;
                }
            }
        }
    }
    if(count==0)
    {
        printf("No pairs");
    }
}