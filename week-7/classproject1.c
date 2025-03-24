#include <stdio.h>

int main(){
    
    int array1[3] = {2, 4, 7};
    int array2[3] = {4, 9, 1};
    int sum[3];

    int *p2array1 = array1;
    int *p2array2 = array2;
    int *p2sum = sum;

    for (int i = 0; i < 3; i++) {
            *p2sum = *p2array1 + *p2array2;
    }

    printf("Resultant array after addition:\n");
    puts(" ");
    for (int i=0; i < 9; i++){
        printf("%d\n", *p2sum); 
    }

    return 0;
}