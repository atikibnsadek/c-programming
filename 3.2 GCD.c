#include<stdio.h>

///method:2 using for loop & if
int main(){
    int a,b,gcd,i;

    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;++i){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    printf("GCD:%d",gcd);
    return 0;
}



/*  ///method:1.
    int findgcd(int a, int b){
    int temp;
    while(b!=0){ /// loop ta cholbe jotokhon na b=0 hocche. 0 hole loop e dhukbe na.
        temp=a%b; ///remainder gulo rakhtese.
        a=b;/// jeta divide hoy nai sheta a te gelo.
        b=temp; /// remainder ta b te gelo. last e remainder 0 hobe b te 0 dhukhbe. then loop break hobe.
    }
    return(a); /// gcd ta a te store hoise tai a return korbo.
}

int main(){
    int gcd;
    gcd=findgcd(12,16);
    printf("The GCD of 120&160 is: %d",gcd);
    return 0;
}*/

