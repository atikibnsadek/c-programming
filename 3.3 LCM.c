#include<stdio.h>

int findgcd(int a, int b){
    int temp;
    while(b){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int findlcm(int a,int b){
//    int temp,lcm;
//    temp=a*b;
//    lcm=temp/findgcd(a,b);
//    return lcm;
    return a*b/findgcd(a,b);
}
int main(){
    int a,b;
//    int lcm;
    printf("Enter 2 number:");
    scanf("%d %d",&a,&b);
//    lcm=findlcm(a,b);
//    printf("\nLCM: %d",lcm);
    printf("\nLCM: %d",findlcm(a,b));
    return 0;
}

