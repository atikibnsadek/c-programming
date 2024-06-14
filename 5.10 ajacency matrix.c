#include <stdio.h>

int main()
{
    int arr1[5][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500}, {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000, 40000, 50000}};
    int arr2[5][5],r,c;
    printf("content of the first:\n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            printf("%d ",arr1[r][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            arr2[c][r]=arr1[r][c];
        }
    }
    printf("Adjacency matrix:\n");
    for(r=0;r<5;r++){
        for(c=0;c<5;c++){
            printf("%d ",arr2[r][c]);
        }
        printf("\n");
    }
    return 0;
}
