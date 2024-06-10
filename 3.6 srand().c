#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int randomnumber= rand();
    printf("Random Number: %d\n", randomnumber);
    /*for(int i;i<=200;i++){
        int randomnumber= rand();
        printf("Random Number: %d\n", randomnumber);
    }*/
    return 0;
}

