#include<stdio.h>

void main(){
    int i,j,space,number=1,rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    printf("\n\n");
    for(i=1;i<=rows;i++){
        for(space=1;space<=(rows-i);space++){ ///printing space.
            printf("     ");///5 space
        }
        number=i;
        for(j=1;j<=i;j++){
            printf("%5d",number++);///printing number.
        }
        number-=2;
        for(j=1;j<i;j++){
            printf("%5d",number--);
        }
        printf("\n");
    }
}
