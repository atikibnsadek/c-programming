#include<stdio.h>

char gameboard[3][3];
void drawboard();
int showresult(char ch);
int validateinput(int cell);
void turnplayero(int *pcell);
void turnplayerx(int *pcell);
void getrowcol(int cell,int* px,int* py);
int main(){
    int x=0,y=0,row=0,col=0,selectedcell=0,availablecell=9;
    char startchar='1';
    for(row=0;row<3;row++){///make all the cell numbered from 1-9.
        for(col=0;col<3;col++){
            gameboard[row][col];
        }
    }//check again ?
    drawboard();///now draw board with current data in gameboard[][] array.
    while(availablecell>=0){
        turnplayerx(&selectedcell);///assmue player one is x.
        getrowcol(selectedcell,&x,&y);///get row col from the selected cell.
        gameboard[x][y]='X';///update gameboard array.
        availablecell-=1;///decrease available cell
        drawboard();///redraw gameboard with current data in gameboard[][] array.
        if(showresult('X')==1){///check whether player1 is winner or not
            break;
        }
        else if(availablecell==0){
            printf("\nGame Drawn");
            break;
        }

        turnplayero(&selectedcell);///assmue player2 is O
        getrowcol(selectedcell,&x,&y);///get row col from the selected cell.
        gameboard[x][y]='O';///update gameboard array.
        availablecell-=1;///decrease available cell
        drawboard();///redraw gameboard with current data in gameboard[][] array.
        if(showresult('O')==1){///check whether player1 is winner or not
            break;
        }
        else if(availablecell==0){
            printf("\nGame Drawn");
            break;
        }
    }
    return 0;
}

void drawboard(){/// function to draw board with current data in gameboard[][] array.
    int i,j;
    printf("\nTIC TAC TOE");
    printf("\nDisgits (1-9) indicates valid cell number\n");
    printf("\n    %c| %c | %c",gameboard[0][0],gameboard[0][1],gameboard[0][2]);
    printf("\n  ---|---|---");
    printf("\n    %c| %c | %c",gameboard[1][0],gameboard[1][1],gameboard[1][2]);
    printf("\n  ---|---|---");
    printf("\n    %c| %c | %c",gameboard[2][0],gameboard[2][1],gameboard[2][2]);
}
void turnplayero(int *pcell){///function to make player o's move
    int cell;
    do{     ///loop until player selects vaild cell.
        printf("\n Player O,\n Select valid cell number:");
        scanf("%d",&cell);
    }while(0==validateinput(cell));
    *pcell=cell;
}
void turnplayerx(int *pcell){///function to make player x's move
    int cell;
    do{     ///loop until player selects vaild cell.
        printf("\n Player X,\n Select valid cell number:");
        scanf("%d",&cell);
    }while(0==validateinput(cell));
    *pcell=cell;
}
void getrowcol(int cell, int* px, int* py){ ///funtion to calculate row and column number from selected cell
    *px=(cell-1)/3;
    *py=(cell-1)%3;
}

int validateinput(int cell){  ///funtion to check selected cell is vaild or not.
    int row,col;
    if((cell<1)||(cell>9))
        return 0;
    getrowcol(cell,&row,&col);
    if(('O'==gameboard[row][col])||('X'==gameboard[row][col])){
        return 0;
    }
    return 1;
}

///function to show the winnner.
int showresult(char ch){
    int status=0;
    if(gameboard[0][0]==ch&&gameboard[1][1]==ch&&gameboard[2][2]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[0][2]==ch&&gameboard[1][1]==ch&&gameboard[2][0]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[0][0]==ch&&gameboard[1][0]==ch&&gameboard[2][0]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[1][0]==ch&&gameboard[1][1]==ch&&gameboard[1][2]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[2][0]==ch&&gameboard[2][1]==ch&&gameboard[2][2]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[0][0]==ch&&gameboard[0][1]==ch&&gameboard[0][2]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[0][1]==ch&&gameboard[1][1]==ch&&gameboard[2][1]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    else if(gameboard[0][2]==ch&&gameboard[1][2]==ch&&gameboard[2][2]==ch){
        printf("\nPlayer %c is winner.",ch);
        status=1;
    }
    return status;
}
