#include <stdio.h>
int main()
{
    int count=0,n=0,b=0;
    scanf("%d",&n);
    do{
        b=n%10;
        if(b==0){
            count++;
        }
        n=n/10;
    }while(n!=0);
    if(count>0){
        printf("Contains Zero");
    }
    else{
        printf("Does not contain zero");
    }
}