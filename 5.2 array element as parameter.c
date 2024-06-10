#include<stdio.h>

int func(int val1, int val2){
    int n=val1+val2;
    return n;
}
int main(){
    int x,arr[]={5,6,7,8};
    x=func(arr[0],arr[3]);
    printf("Sum of elements is: %d",x);
    return 0;
}

