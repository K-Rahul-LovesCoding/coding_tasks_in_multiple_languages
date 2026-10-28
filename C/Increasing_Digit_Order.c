#include <stdio.h>
int main()
{
    int num=0;
    int current_digit;
    int before_digit;
    scanf("%d",&num);
    current_digit = num%10;
    num=num/10;
    do{
        before_digit=num%10;
        if(current_digit>before_digit){
            current_digit=before_digit;
        }
        else{
            printf("Not Increasing");
            return 0;
        }
        num=num/10;
    }while(num!=0);
    printf("Increasing");
}