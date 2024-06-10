///cos series
#include<stdio.h>

void main()
{
    int i,n;
    float x,y,sum;
    printf("Input a number (x):");
    scanf("%f",&x);
    printf("Input a number (N):");
    scanf("%d",&n);
    x=x*3.1416/180; //converting x into radians;
    y=1;
    sum=1;
    for(i=1;i<x+1;i++)
    {
        y=y*pow((double)(-1),(double)(2*i-1))*x*x/(2*i*(2*i-1));
        sum=sum+y;
    }
    printf("cos(x)=%.3f",sum);
}

