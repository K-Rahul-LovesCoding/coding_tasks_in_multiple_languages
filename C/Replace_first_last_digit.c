#include <stdio.h>
int main()
{
    int n=0,a=0,last_digit=0,first_digit=0,ans=0,place_holder=1;
    scanf("%d",&n);
    a=n;
    last_digit=n%10;
    do{
        first_digit=n%10;
        n=n/10;
        place_holder=place_holder*10;
    }while(n!=0);
    place_holder=place_holder/10;
    ans=last_digit*place_holder+((a%place_holder)/10)*10+first_digit;
    printf("%d",ans);
}
