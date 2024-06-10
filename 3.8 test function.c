#include<stdio.h>

void testfunction(int ara[]){
    ara[0]=100;
    return;
}
int main(){
    int ara[]={1,2,3,4,5};
    printf("%d\n",ara[0]);
    testfunction(ara);
    printf("%d\n",ara[0]);
    return 0;
}