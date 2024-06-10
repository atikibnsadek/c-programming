#include<stdio.h>

int factorial(int n){
    if(n<0)
        printf("undefined");
    if(n<=1)///base case
        return 1;
    else
        return (n*factorial(n-1)); ///recursive case
}
int main(){
    int n;
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}
