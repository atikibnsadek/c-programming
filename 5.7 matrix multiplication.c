#include<stdio.h>

int main(){
    int a[2][2]={5,4,4,4};
    int b[2][2]={6,7,4,8};
    int c[2][2],i,j,k,sum;
    printf("Matrix A is\n\t\t"); ///print matrix A
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\nMatrix B is:\n\t\t");///print matrix B
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n\t\t");
    }
    printf("\nMatrix multiplication of A&B is:\n\t\t");///print matrix multiplication
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=0;
            for(k=0;k<2;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d\t",c[i][j]);
        }
        printf("\n\t\t");
    }
    return 0;
}
