#include<stdio.h>

#define sq(x) (x)*(x)
#define cub(x) (x)*(x)*(x)

void main()
{
    int i;
    printf("Number\t Square\t cube\n");
    for(i=0;i<=10;i++){
        printf("%d\t %d\t %d\n",i,sq(i),cub(i));
    }
}
