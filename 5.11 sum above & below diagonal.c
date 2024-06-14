#include<stdio.h>

int main(){
    int row=0,col=0,size=0,sumabove=0,sumbelow=0,matrix[5][5];
    printf("Matrix size:");
    scanf("%d",&size);
    printf("\nEnter matrix elements:\n");
    for(row=1;row<size+1;++row){
        for(col=1;col<size+1;++col){
            printf("Element[%d][%d]",row,col);
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
    printf("\nDiagaonal Elements are: ");
    for(row=1;row<size+1;++row){
        for(col=1;col<size+1;++col){
            if(row==col){
                printf("%4d",matrix[row][col]);
            }
        }
    }
    printf("\nElements above the main diagonal:");
    for(row=1;row<size+1;++row){
        for(col=1;col<size+1;++col){
            if (row<col){
                printf("%4d",matrix[row][col]);
                sumabove+=matrix[row][col];
            }
        }
    }
   printf("\nElements below the main diagonal:");
    for(row=1;row<size+1;++row){
        for(col=1;col<size+1;++col){
            if (row>col){
                printf("%4d",matrix[row][col]);
                sumbelow+=matrix[row][col];
            }
        }
    }
    printf("\n\nSum of elements above the main diagonal:%d\n\nBelow the main diagonal:%d\n",sumabove,sumbelow);
    return 0;
}
