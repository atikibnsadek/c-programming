#include<stdio.h>

int findmax(int ara[], int n); //function parameter.

int main(){
    int ara[]={-100,0,53,22,83,23,89,-132,201,3,85};
    int n=11;
    int max=findmax(ara,n); /// passing array to a funtion
    printf("%d\n",max);
    return 0;
}
int findmax(int ara[], int n){
    int max=ara[0],i;
    for(i=1;i<n;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    return max;
}
