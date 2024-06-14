#include<stdio.h>

int main(){
    int row=0,col=0,size=0,matrix[10][10];
    printf("\nEnter matrix size:");
    scanf("%d",&size);
    printf("\nEnter matrix elemnets:\n");
    for(row=1;row<size+1;++row){
        for(col=1;col<size+1;++col){
            printf("Element[%d][%d]: ",row,col);
            scanf("%d",&matrix[row][col]);
        }
         printf("\n");
    }
    printf("\nthe given matrix is:\n");
    for(row=1;row<size+1;++row){
        for(col=1;col<size+1;++col){
            printf("%4d",matrix[row][col]);
        }
        printf("\n");
    }
    printf("\nOutput of Helically traverse: \n"); ///46873 31542 91281 64739 57284
    row=1;
    while (size>0)
    {
        for(col=row;col<size+1;col++){
            printf("%4d",matrix[row][col]);///4 6 8 7 3///1 5 4///2
        }
        for(col=row+1;col<size+1;++col){
            printf("%4d",matrix[col][size]);///2 1 9 4///8 3 
        }
        for(col=size-1;col>row-1;col--){
            printf("%4d",matrix[size][col]);///8 2 7 5///7 4
        }
        for(col=size-1;col>row;col--){
            printf("%4d",matrix[col][row]);///6 9 3///1
        }
        row+=1;
        size-=1;
    }

    return 0;
}
