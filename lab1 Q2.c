#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n%2!=0)
        printf("%d is odd.",n);
    else
        printf("%d is even.",n);
    return 0;
}
