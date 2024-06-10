#include<stdio.h>

void main()
{
    int n,i;
    printf("Enter the value of multiplicand:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d x%2d=%2d\n",n,i,n*i);
    }
}

