///print all the digit form 5 digit number separately.
#include<stdio.h>

void main()
{
    int n,d,d1,d2,d3,d4;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);
    d=n/10000;
    d1=n/1000%10;
    d2=n/100%10;
    d3=n/10%10;
    d4=n%10;
    printf("%d-%d-%d-%d-%d",d,d1,d2,d3,d4);
}
