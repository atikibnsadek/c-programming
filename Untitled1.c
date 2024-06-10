#include<stdio.h>

int main(){
    int arr[5][5]={6,4,7,8,9,3,7,1,9,9,8,6,4,2,7,2,4,2,5,9,4,1,6,7,3};
    int row,col,sum=0;
    for(row=0;row<5;row++){
        for(col=0;col<5;col++){
            printf("%d\t",arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    for(row=0;row<5;row++){
        int rowSum = 0;
        for (col = 0; col < 5; col++) {
            rowSum += arr[row][col];
        }
        printf("Sum of row %d: %d\n", row + 1, rowSum);
    }
    printf("\n\n");
    for (col = 0; col < 5; col++) {
        int columnSum = 0; // Initialize columnSum here
        for (row = 0; row < 5; row++) {
            columnSum += arr[row][col];
        }
        printf("Sum of column %d: %d\n", col + 1, columnSum);
    }
    return 0;
}
