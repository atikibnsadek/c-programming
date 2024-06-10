#include<stdio.h>

int main(){
    int ara[]={1,2,3,4,5,6,7,8,9,10};
    int rev[10],i,j;
    for(i=0,j=9;i<10;i++,j--){
        rev[j]=ara[i];
    }
    for(i=0;i<10;i++){
            ara[i]=rev[i];
        }
    for(i=0;i<10;i++){
        printf("%d ",ara[i]);
    }
    return 0;
}
