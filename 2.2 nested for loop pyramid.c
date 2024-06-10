#include<stdio.h>

void main(){
    int rows,space,n=1,i,j;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(space=1;space<=(rows-i);space++){/// printing space.
            printf("  ");
        }
        for(j=1;j<=i;j++){

            printf("%2d  ",n);/// here it's printing value of N not J.
            n++;
        }
        printf("value %d %d",space,j);/// value ++ hoye ber hocce tai 1 kore besi dekhay
        printf("\n");
    }
}
