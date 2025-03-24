#include <stdio.h>

int main(){
    
    int matrix1[3][3] = {
        {2,1,0},
        {7,4,1},
        {8,7,3},
    };
    int matrix2[3][3] = {
        {3,4,8},
        {4,9,1},
        {4,0,3},
    };
    int sum[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}