#include<stdio.h>

int main(){
    int namta[10][10];
    int row,col,even=0,odd=0;
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            namta[row][col]=(row+1)*(col+1);// matrix akare store hocche.
        }
    }
    for(row=0;row<10;row++){
        for(col=0;col<10;col++){
            if(namta[row][col]%2==0){
                even++;
            }
            else{
                odd++;
            }
            printf("%dx%d= %d\n",(row+1),(col+1),namta[row][col]);
        }
        printf("\n");
    }
    printf("Number of even number is: %d\n",even);
    printf("Number of odd number is: %d\n",odd);
    return 0;
}
