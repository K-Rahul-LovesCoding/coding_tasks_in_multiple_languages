#include <stdio.h>
int main()
{
    int last_digit =0, second_digit=0,n=0,largest=0;
    scanf("%d",&n);
    while(n>0){
        last_digit=n%10;
        if(last_digit>largest){
            second_digit=largest;
            largest=last_digit;
        }
        else if(last_digit>second_digit && last_digit!=largest){
            second_digit=last_digit;}
        n=n/10;
    }
    if(second_digit==0){
        printf("No large digit");
    }
    else{
        printf("%d",second_digit);
    }
}