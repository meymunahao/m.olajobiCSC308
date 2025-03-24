#include <stdio.h>

int main(){

    int rowMatrix[] = {4, 5, 7, 8, 8};
    int newArray[5];
    int matrix[3][2] = { {3, 8}, {2, 0}, {5,2}};

    printf("%i", rowMatrix[2]);

    for (int i==0; i<5; i++){
        printf("%i\n", rowMatrix[i]);
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<2; j++){
            printf("%i\n", matrix[i][j]);
        }
    }

    return 0;
}