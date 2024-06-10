#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    for(i=1;i<=20;++i){ ///rolling the die 20 times.
        printf("%5d,",1+(rand()%6));

    if(i%5==0){///for linebreak after 5 numbers.
        puts("");
        }
    }
    return 0;
}

